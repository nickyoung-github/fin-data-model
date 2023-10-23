cmake_minimum_required(VERSION 3.9)
project(fin_data_model)

set(CMAKE_CXX_STANDARD 20)

find_package(Python3 REQUIRED COMPONENTS Interpreter Development)
find_package(pydantic_bind REQUIRED COMPONENTS HINTS "${Python3_SITELIB}")

pydantic_bind_add_package(fin_data_model/v1)
