# CMake最低版本要求
cmake_minimum_required (VERSION 2.8)
# 项目信息
project(Demo3)
# 设定可执行二进制文件的目录
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
# 设定编译得到的库文件的目录
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
# 将库文件目录作为连接目录
link_directories(${PROJECT_SOURCE_DIR}/lib)
# 设定头文件目录
include_directories(${PROJECT_SOURCE_DIR}/include)
# 添加src目录作为继续构建
add_subdirectory(${PROJECT_SOURCE_DIR}/src)
