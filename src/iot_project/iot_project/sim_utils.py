from launch_ros.actions import Node

WORLD_NAME = "iot_project_world"


# Object used to store the configuration file
class SimulationConfig:

    def __init__(self):
        self.simulation_name        = "Default Simulation"
        self.no_drones              = 3
        self.no_targets             = 0
        self.target_positions       = []
        self.threshold_values       = []
        self.fairness_weight        = 1.0
        self.aoi_weight             = 1.0
        self.violation_weight       = 1.0
        self.simulation_time        = 120
        self.wind_vector            = (0.0,0.0,0.0)
        self.wind_strength          = 0.0

    # Set function, Automatically converts strings given in input
    # to the appropriate variable type
    def set(self, attr, attr_value):

        if (attr in ["no_drones", "simulation_time"] and isinstance(attr_value, str)):
            attr_value = int(attr_value)
        if attr in ["aoi_weight", "violation_weight", "fairness_weight", "wind_strength"]:
            attr_value = float(attr_value)

        setattr(self, attr, attr_value)
        
        self.no_targets = len(self.target_positions)


def import_simulation_config(argument : str) -> SimulationConfig:

    sim_configuration =  SimulationConfig()

    (argument_name, simulation_file) = argument.split(":=")
    with open(simulation_file) as f:
        try:
            for line in f.readlines():
                if line[0] == "#" or line.strip() == "":
                    continue
                line = line.strip()
                parameter, parameter_value = read_config_line(line)
                sim_configuration.set(parameter, parameter_value)
        except:
            print("\n[ERROR] [ConfigImporter]: Error reading line: %s\n" % line)
            return None
            

    return sim_configuration

def parse_position_array(tuples : str):
    parsed_tuples = []
    tuples = tuples.strip("[]")
    tuples = tuples.split(";")
    for t in tuples:
        t = t.strip("()").strip()
        parsed_tuples.append(tuple([int(i) for i in t.split(",")]))

    return parsed_tuples


def read_config_line(line : str):

    parameter, parameter_value = line.split(":")

    if parameter == "target_positions":
        return parameter, parse_position_array(parameter_value)
    elif parameter == "threshold_values":
        return parameter, [int(t) for t in parameter_value.split(",")]
    elif parameter == "wind_vector":
        return parameter, [float(w) for w in parameter_value.strip("()").split(",")]
    else:
        return parameter, parameter_value


def spawn_drone(id : int = 0, pos : tuple = (0, 0, 0), world_name : str =  WORLD_NAME):
    with open("./gazebo_resources/x3.sdf") as sdf_file:
        x3_sdf = sdf_file.read()
        x3_sdf = x3_sdf.replace("X3", "X3_%d" % id)

        return Node(
                package='ros_gz_sim',
                executable='create',
                arguments= [
                    '-world',
                    world_name,
                    '-string',
                    x3_sdf,
                    "-name",
                    "X3 - %d" % id,
                    "-x",
                    str(pos[0]),
                    "-y",
                    str(pos[1]),
                    "-z",
                    str(pos[2])
                ],
                name='sim'
        )
        
