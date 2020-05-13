cmake_minimum_required(VERSION 3.10)

# set the project name
project(Yocto_Lib
        VERSION 0.1.0
        LANGUAGES CXX)

# specify the default C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# set global compiler flags
add_compile_options(-Wall)

add_subdirectory(src/hello_world)

# configure_file(TutorialConfig.h.in TutorialConfig.h)