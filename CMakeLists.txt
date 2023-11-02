cmake_minimum_required(VERSION 3.5)

project(myProject)

# 添加可执行文件
add_executable(myExecutable main.cpp)

# 添加头文件搜索路径
include_directories(${PROJECT_SOURCE_DIR})

# 添加静态库
add_library(myLib STATIC lib/myLib.cpp)

# 添加库文件搜索路径
link_directories(${PROJECT_SOURCE_DIR}/lib)

# 添加链接库
target_link_libraries(myExecutable myLib)

# 添加动态库
add_library(mySharedLib SHARED lib/mySharedLib.cpp)

# 添加链接库
target_link_libraries(myExecutable mySharedLib)