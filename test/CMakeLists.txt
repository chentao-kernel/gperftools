project(TEST)
cmake_minimum_required(VERSION 3.9)
set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../src)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRCLIST)

link_libraries(${CMAKE_CURRENT_SOURCE_DIR}/../.libs/libtcmalloc.a)
add_executable(main test.cpp)

target_link_libraries(main -pthread)