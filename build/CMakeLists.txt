cmake_minimum_required(VERSION 3.1)

project (appserver CXX)

# Use C++14
set(CMAKE_CXX_STANDARD 14)

# Use strict compiler settings
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -pedantic")

# Generated executable will be saved to bin/
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Include project sources under src directory
add_subdirectory(${CMAKE_SOURCE_DIR}/src)
