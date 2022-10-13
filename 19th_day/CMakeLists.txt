cmake_minimum_required(VERSION 3.0)

project(speech_manager)

set(SOURCES 
src/speaker.cpp
src/speech_manager.cpp)

add_executable(speech_manager main.cpp ${SOURCE})

target_include_directories(speech_manager 
PRIVATE
${PROJECT_SOURCE_DIR}/include)