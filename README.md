# Application Server
C++ application server for the subject Programming Workshop 2 (Taller de Programación 2) of the University of Buenos Aires.

## Directory Structure
```
appserver
|  .git
|  .gitignore
|  Dockerfile.dev
|  Dockerfile.prod
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
appserver$ docker build -f Dockerfile.dev -t fiuba/appserver:dev
appserver$ docker run -p 8080:8080 -it fiuba/appserver:dev

# Building production environment
appserver$ docker build -f Dockerfile.prod -t fiuba/appserver:prod
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
