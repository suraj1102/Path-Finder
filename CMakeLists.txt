cmake_minimum_required(VERSION 3.10.0)
project(pathFinderTest)
find_package(OpenCV REQUIRED)
add_executable(pathFinderTest src/main.cpp)
target_link_libraries(pathFinderTest ${OpenCV_LIBS})