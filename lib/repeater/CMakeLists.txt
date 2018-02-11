SET(SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/repeater.cpp)
SET(HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/headers/repeater.h)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/headers/)

add_library(repeater OBJECT ${HEADERS} ${SOURCES})
target_include_directories(repeater PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/headers)

INSTALL(FILES ${CMAKE_CURRENT_SOURCE_DIR}/headers/repeater.h
        DESTINATION "libs/include"
        )
