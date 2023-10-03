cmake_minimum_required(VERSION 3.16)

project(learning-qt-NetworkInterface VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_CXX_FLAGS -rdynamic)
set(CMAKE_CXX_FLAGS -g3)

find_package(Qt6 COMPONENTS Core Network REQUIRED)

set(EXEC_NAME ${PROJECT_NAME})
add_executable(${EXEC_NAME})

if (CMAKE_BUILD_TYPE MATCHES "Debug")
    target_compile_definitions(${EXEC_NAME} PRIVATE NO_AUTOMATIC_RESTART)
endif()


add_subdirectory(src)
