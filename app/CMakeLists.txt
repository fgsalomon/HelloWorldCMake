set(TARGET_NAME sampleApp)
SET(SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

add_executable(${TARGET_NAME} ${SOURCES})
target_link_libraries(${TARGET_NAME} PUBLIC helloworld)
target_include_directories(${TARGET_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/lib/greeter/headers/
    ${CMAKE_SOURCE_DIR}/lib/repeater/headers/)
