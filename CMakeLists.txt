cmake_minimum_required(VERSION 3.10)
project(my_chromium_browser)

add_subdirectory(cef)

include_directories(cef/include)

add_executable(my_browser src/main.cpp)

target_link_libraries(my_browser cef_lib)
