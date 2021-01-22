cmake_minimum_required(VERSION 3.17)
project(HW9)

set(CMAKE_CXX_STANDARD 11)

include_directories(Include)
link_directories(libs)
add_executable(HW9 string.cpp our_debug.cpp field.cpp port.cpp ip.cpp main.cpp)

target_link_libraries(HW9 libinput.so)