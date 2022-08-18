cmake_minimum_required(VERSION 3.0)#最低CMake版本

project (First_day_C++)# 工程名

set(SOURCES
    src/Circle.cpp
    src/Point.cpp
    main.cpp
)#创建一个变量，名字叫SOURCE。它包含了所有的cpp文件。

add_executable(a.out ${SOURCES})#用所有的源文件生成一个可执行文件，因为这里定义了SOURCE变量，所以就不需要罗列cpp文件了
#等价于命令：     add_executable(hello_headers src/Hello.cpp src/main.cpp)

target_include_directories(a.out
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)#设置这个可执行文件hello_headers需要包含的库的路径
