Doxygen demonstration
=====================
The contents of this directory is intended to:
* Demonstrate doxygen usage,
* Show the sort of html output you can produce with doxygen,
* Provide an example configuration file.

The config file contained in this project is a slightly edited version of the file produced by running:
```bash
doxygen -g doxyconfig
```
See the doxygen [homepage](http://www.stack.nl/%7Edimitri/doxygen/index.html) and the [wiki](https://github.com/ichep-coders-club/the-wiki/wiki/Doxygen) for more.

Usage
-----
To test doxygen with this config file and sample project provided do:

1. Change into the `exampleProject` directory:
2. Type:
```bash
doxygen ../doxyconfig
```
3. The output will appear in a subdirectory of the exampleProject directory, and can be viewed in a broweser by opening the file in `exampleProject/doxygenOutput/html/index.html`
