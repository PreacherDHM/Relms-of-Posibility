cmake_minimum_required(VERSION 3.10)

# set(src_file "./src/main.cpp")

include_directories("./src/includes")
include_directories("../Common/includes")
link_directories("../Common")


project(ROP VERSION 0.1)

# configure_file(Rop_config.h.in Rop_config.h)
# target_include_directories(ROP PUBLIC "${PROJECT_BINARY_DIR}")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(ROP ./src/main.cpp)
target_link_libraries(ROP Common)
