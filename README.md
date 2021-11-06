# README

Simple example of the python package that solves some dummy problems.

## Install
```shell
pip install -r requirements.txt
pip install -e .
```

## Use
```shell
python examples/square.py 2
# output will be: 4.0
```

## Test
```shell
pytest
```

## (Pre-)commit
1. Install:
```sh
pip install pre-commit && pre-commit install
```
2. Run:
```sh
git add <FILES>
pre-commit run
git add <FIXED FILES>  # if necessary
git commit -m "MESSAGE"
```
