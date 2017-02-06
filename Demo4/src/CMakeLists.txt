# 增加opencv的依赖
find_package(OpenCV REQUIRED)
# 添加opencv的包含目录
include_directories(${OpenCV_INCLUDE_DIRS})
# 查找当前目录下的所有源文件，并将名称保存到DIR_SRCS变量
aux_source_directory(. DIR_SRCS)
# 指定生成的目标
add_executable(Demo ${DIR_SRCS})
# 链接OpenCV库
target_link_libraries(Demo ${OpenCV_LIBS})
