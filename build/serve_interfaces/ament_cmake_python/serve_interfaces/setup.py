from setuptools import find_packages
from setuptools import setup

setup(
    name='serve_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('serve_interfaces', 'serve_interfaces.*')),
)
