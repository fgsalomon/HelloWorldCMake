SET(SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/repeater.cpp)
SET(HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/headers/repeater.h)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/headers/)

add_library(repeater ${HEADERS} ${SOURCES})
