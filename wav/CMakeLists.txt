#VERSION
cmake_minimum_required(VERSION 3.18.4)

#NAME
project(wav)

#INCLUDES
include_directories(includes)

#SOURCES
file(GLOB SOURCES "src/*.cpp" "includes/*.h")

#EXEXCUTABLE
add_executable("a.out" ${SOURCES})
