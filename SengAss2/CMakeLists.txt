# CMakeList.txt : CMake project for SengAss2, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (SengAss2 "main.cpp" "DiscString.h"  "Node.h" "Node.hpp" "LinkedList.h" "LinkedList.hpp"
							"LStack.h" "LStack.hpp" "TowerHanoi.h" "TowerHanoi.hpp")

# TODO: Add tests and install targets if needed.
