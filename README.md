# Application Server
C++ application server for the subject Programming Workshop 2 (Taller de Programación 2) of the University of Buenos Aires.

## Directory Structure
```
appserver
|  .git
|  .gitignore
|  Dockerfile
|  generate-eclipse-files.sh
|
|  build/
|  |  CMakeLists.txt
|  |  bin/
|  |  cmake/
|  |  src/
|  |  build.sh
|  |  clean.sh
|
|  runtime/
|  |  config/
|  |  |  dev/
|  |  |  prod/
|
|  eclipse-files/
|  |  ...
|
```

## Deploying Docker Container
```
# Building and deploying development environment
appserver$ export APPSERVER_TARGET_ENV=dev
appserver$ docker build -t fiuba/appserver:dev
appserver$ docker run -it fiuba/appserver:dev

# Building production environment
appserver$ export APPSERVER_TARGET_ENV=prod
appserver$ docker build -t fiuba/appserver:prod
```

## Building and Running Locally (no container, assuming Ubuntu)
```
appserver$ sudo apt-get install g++ make cmake
appserver$ export APPSERVER_CFG=$(pwd)/runtime/config/dev
appserver$ cd build
appserver/build$ ./clean.sh && build.sh
appserver/build$ ./bin/appserver
```

## Generating Eclipse Project Files
```
appserver$ ./generate-eclipse-files.sh
```
That's it. Now import the contents of the `eclipse-files` directory into Eclipse as a project or as a Makefile project.

## TODO

* Integrate Travis CI.

* Integrate CPack for .deb package generation.
