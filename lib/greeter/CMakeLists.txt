SET(SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/greeter.cpp)
SET(HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/headers/greeter.h)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/headers/)

add_library(greeter OBJECT ${HEADERS} ${SOURCES})
target_include_directories(greeter PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/headers)

INSTALL(FILES ${CMAKE_CURRENT_SOURCE_DIR}/headers/greeter.h
        DESTINATION "libs/include"
        )
