cmake_minimum_required(VERSION 3.10)
project(CopilotStudy)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(CopilotStudy "src/main.cpp")

target_link_libraries(CopilotStudy pcap)
