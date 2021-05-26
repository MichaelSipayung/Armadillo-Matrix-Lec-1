# CMakeList.txt : CMake project for Armadillo Matrix Lec 1, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
find_package(Armadillo CONFIG REQUIRED)
# Add source to this project's executable.
add_executable (CMakeTarget "Armadillo Matrix Lec 1.cpp" "Armadillo Matrix Lec 1.h")
target_link_libraries(CMakeTarget PRIVATE ${ARMADILLO_LIBRARIES})

# TODO: Add tests and install targets if needed.
