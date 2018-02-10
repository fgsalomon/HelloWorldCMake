set(TARGET_NAME unit_test)
set(UNIT_TEST_LIST
  greeter
  repeater)

foreach(NAME IN LISTS UNIT_TEST_LIST)
  list(APPEND UNIT_TEST_SOURCE_LIST
    ${NAME}.test.cpp)
endforeach()

include(CodeCoverage)
APPEND_COVERAGE_COMPILER_FLAGS()

add_executable(${TARGET_NAME}
  ${CMAKE_SOURCE_DIR}/lib/greeter/src/greeter.cpp
  ${CMAKE_SOURCE_DIR}/lib/repeater/src/repeater.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/${UNIT_TEST_SOURCE_LIST})

target_include_directories(${TARGET_NAME}
  PUBLIC ${CMAKE_SOURCE_DIR}/deps/catch/
  PUBLIC ${CMAKE_SOURCE_DIR}/lib/repeater/headers
  PUBLIC ${CMAKE_SOURCE_DIR}/lib/greeter/headers)


add_test(
  NAME ${TARGET_NAME}
  COMMAND ${TARGET_NAME} -o report.xml -r junit)

set(COVERAGE_EXCLUDES "${CMAKE_SOURCE_DIR}/deps/catch/catch.hpp" "${CMAKE_CURRENT_SOURCE_DIR}/*" "/usr/include/\\*")

SETUP_TARGET_FOR_COVERAGE_COBERTURA(
     NAME cobertura_coverage                    # New target name
     EXECUTABLE ctest -j ${PROCESSOR_COUNT} # Executable in PROJECT_BINARY_DIR
     DEPENDENCIES ${TARGET_NAME}         # Dependencies to build first
)

SETUP_TARGET_FOR_COVERAGE(
     NAME coverage                    # New target name
     EXECUTABLE ctest -j ${PROCESSOR_COUNT} # Executable in PROJECT_BINARY_DIR
     DEPENDENCIES ${TARGET_NAME}         # Dependencies to build first
)
