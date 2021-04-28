cmake_minimum_required(VERSION 3.17)
project(EmployeeList)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)

add_executable(EmployeeList
        .idea/.gitignore
        .idea/EmployeeList.iml
        .idea/modules.xml
        .idea/vcs.xml
        .idea/workspace.xml
        .gitattributes
        .gitignore
        department.h
        employee.cpp
        employee.h
        main.cpp
        otherMthds.txt)
