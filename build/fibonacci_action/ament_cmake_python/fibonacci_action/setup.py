from setuptools import find_packages
from setuptools import setup

setup(
    name='fibonacci_action',
    version='0.0.0',
    packages=find_packages(
        include=('fibonacci_action', 'fibonacci_action.*')),
)
