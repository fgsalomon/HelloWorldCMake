set(TARGET_NAME integration_test)

add_executable(${TARGET_NAME}
  ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

target_include_directories(${TARGET_NAME}
  PUBLIC ${CMAKE_SOURCE_DIR}/deps/catch/
  PUBLIC ${CMAKE_SOURCE_DIR}/lib/repeater/headers
  PUBLIC ${CMAKE_SOURCE_DIR}/lib/greeter/headers)

target_link_libraries(${TARGET_NAME} PRIVATE helloworld)

add_test(
  NAME ${TARGET_NAME}
  COMMAND ${TARGET_NAME} -o report.xml -r junit)
