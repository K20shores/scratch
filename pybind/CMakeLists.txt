cmake_minimum_required(VERSION 3.20)
project(test VERSION 0.0.0 LANGUAGES CXX)

include(FetchContent)

FetchContent_Declare(pybind11
    GIT_REPOSITORY https://github.com/pybind/pybind11
    GIT_TAG        v3.0.0
    FIND_PACKAGE_ARGS NAMES pybind11
)

FetchContent_MakeAvailable(pybind11)

find_package(pybind11 REQUIRED)

pybind11_add_module(test 
  test.cpp
)
 target_compile_features(test PUBLIC cxx_std_20)