cmake_minimum_required(VERSION 3.17)
project(HW9)

set(CMAKE_CXX_STANDARD 11)

include_directories(Include)
link_directories(Libs)
add_executable(HW9 string.cpp main.cpp field.cpp)

target_link_libraries(HW9 libinput.so)