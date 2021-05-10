#######################################
#
# cmake General script  by lius
#
######################################

#cmake版本要求
cmake_minimum_required(VERSION 3.5)   

#工程名称
project(cmake_demo)   

#设置目标生成目录
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)


#添加子目录
add_subdirectory(${PROJECT_SOURCE_DIR}/src/process1)
add_subdirectory(${PROJECT_SOURCE_DIR}/src/process2)