add_executable(appserver main.cpp)

add_subdirectory(webserver)

target_link_libraries(
  appserver
  webserver)
