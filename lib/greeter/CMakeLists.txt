SET(SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/greeter.cpp)
SET(HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/headers/greeter.h)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/headers/)

add_library(greeter ${HEADERS} ${SOURCES})
