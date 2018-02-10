set(TARGET_NAME sampleApp)
SET(SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

add_executable(${TARGET_NAME} ${SOURCES})
target_include_directories(${TARGET_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/lib/greeter/headers)
target_include_directories(${TARGET_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/lib/repeater/headers)
target_link_libraries(${TARGET_NAME} PRIVATE greeter)
target_link_libraries(${TARGET_NAME} PRIVATE repeater)
