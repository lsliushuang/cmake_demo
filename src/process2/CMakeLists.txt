#######################################
#
# cmake General script  by lius
#
######################################

#cmake版本要求
cmake_minimum_required(VERSION 3.5)   

#工程名称
project(process2)   

#编译工具链
set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_C_COMPILER gcc)

#设置编译选项
add_compile_options(-Wall -g -o0 -Wstrict-prototypes -Wmissing-prototypes)


#源码搜索目录
#aux_source_directory("${PROJECT_SOURCE_DIR}/src/process1" src)

#头文件目录
#include_directories("${PROJECT_SOURCE_DIR}/src/process1" inc)

#动态链接库目录
#link_directories("${PROJECT_SOURCE_DIR}/lib")

#链接标准库
link_libraries(m)
link_libraries(pthread)


#编译生成目标
add_executable(process2 process2) #生成可执行文件   
#add_executable(test2_demo ${test2_src})    
#add_library(common STATIC test.c) # 生成静态库
#add_library(common SHARED test.c) # 生成动态库或共享库


#设置目标生成目录
#set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

#添加子目录

#编译打印输出
#message("src = "${src})
