cmake_minimum_required (VERSION 3.0)

project(Worker_manger)

set(SOURCES main.cpp src/Worker_manger.cpp)

add_executable(Worker_manger ${SOURCES})

target_include_directories(Worker_manger PRIVATE ${PROJECT_SOURCE_DIR}/include)


