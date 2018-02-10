# Hello world CMake!

A toy project to learn CMake. Will be using:

* CMake (>= 3.2)
* Catch2 for testing
* Doxygen for documentation
* lcov and gcovr for static analysis

## How to compile

```
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Debug ..
make
```

## Generate Doxygen documentation

```
make doc
```

This will create the `html` and `latex` folder inside `doc`

## Generate lcov report

```
make coverage
```

This will generate the lcov report in the folder `build/coverage`

## Generate gcovr report

```
make cobertura_coverage
```

This will generate the file `build/cobertura_coverage.xml`

## Changelog

### Version 0.0.1:

Initial commit

## TODO

* Add target for generating a shared library
* Improve versioning
* Add SonarQube support
* Add Jenkinsfile
* Improve and customize doc

## Thanks

Thanks to the open-source community that creates and takes part in tools like CMake (including the scripts I took from Internet), Catch2, Doxygen, gcovr, lcov, Jenkins, etc
