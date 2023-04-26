from setuptools import find_packages
from setuptools import setup

setup(
    name='iot_project_interfaces',
    version='1.0.0',
    packages=find_packages(
        include=('iot_project_interfaces', 'iot_project_interfaces.*')),
)
