# For more information about build system see
# https://docs.espressif.com/projects/esp-idf/en/latest/api-guides/build-system.html
# The following five lines of boilerplate have to be in your project's
# CMakeLists in this exact order for cmake to work correctly

cmake_minimum_required(VERSION 3.5)

set(ENABLE_TESTS TRUE)

include(../common/Common.cmake)

project(tests)

add_library(unity STATIC unity/src/unity.c)

FILE(GLOB_RECURSE COMMON_TESTS common/*)

include_directories(
    ${CIOT_INCLUDE_DIRS}
    unity/src
    .
)

add_executable(${PROJECT_NAME}
    ${CIOT_PC_SRCS}
    ${COMMON_TESTS}
    unity/src/unity.c
    main.c
)

target_link_libraries(${PROJECT_NAME} unity)

if (WIN32)
    target_link_libraries(${PROJECT_NAME} ws2_32)
endif()
