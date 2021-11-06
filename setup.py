from setuptools import setup

setup(
    name="solver_dummy",
    version="0.1",
    packages=["solver_dummy"],
    url="https://github.com/MIPT-Virtual-Labs/solver-dummy.git",
    author="Andrey Pikunov",
    author_email="pikunov@phystech.edu",
    include_package_data=True,
    package_data={"": ["./bin/*"]},
)
