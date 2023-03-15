cmake_minimum_required(VERSION 3.0.0)
project(1-two-sum VERSION 0.1.0)

add_library(TwoSum two-sum.c two-sum.h)

add_executable(1-two-sum main.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

target_link_libraries(1-two-sum PRIVATE TwoSum)