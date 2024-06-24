# 声明要求的 cmake 最低版本     
# Declare the minimum version of cmake required
cmake_minimum_required(VERSION 2.8)

# 声明一个 cmake 工程         
# Declare a cmake project
project(HelloSLAM)

# 设置编译模式                
# Set Compilation Mode
set(CMAKE_BUILD_TYPE "Debug")

# 添加一个可执行程序            
# Adding an Executable Program
# 语法：add_executable( 程序名 源代码文件 ）        
# Syntax: add_executable( program_name source_code_file )
add_executable(helloSLAM helloSLAM.cpp)

# 添加hello库                
# Adding a Hello Library
# 정적 라이브러리를 생성 -> libhello.a 생성
# 호출될 때마다 복사본을 생성
add_library(hello libHelloSLAM.cpp)
# 共享库                     
# shared library
# 공유 라이브러리를 생성 (SHARED) -> libhello_shared.so 생성
# 복사본이 하나만 존재 -> 공간이 적다
add_library(hello_shared SHARED libHelloSLAM.cpp)

# 添加可执行程序调用hello库中函数       
# Add executable to call functions in the hello library
add_executable(useHello useHello.cpp)
# 将库文件链接到可执行程序上            
# Link library files to executable programs
target_link_libraries(useHello hello_shared)
