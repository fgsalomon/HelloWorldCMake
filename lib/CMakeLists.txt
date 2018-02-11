set(TARGET_NAME helloworld)
set(STATIC_TARGET_NAME helloworld_static)

add_subdirectory(common)
add_subdirectory(greeter)
add_subdirectory(repeater)

add_library(${TARGET_NAME} SHARED $<TARGET_OBJECTS:greeter> $<TARGET_OBJECTS:repeater>)
set_target_properties(${TARGET_NAME} PROPERTIES VERSION ${VERSION_SHORT}
                                           SOVERSION ${VERSION_MAJOR})
add_library(${STATIC_TARGET_NAME} STATIC $<TARGET_OBJECTS:greeter> $<TARGET_OBJECTS:repeater>)
set_target_properties(${STATIC_TARGET_NAME} PROPERTIES OUTPUT_NAME ${TARGET_NAME}_${VERSION_SHORT})

install(TARGETS ${STATIC_TARGET_NAME} ${TARGET_NAME}
        LIBRARY DESTINATION libs/${CMAKE_BUILD_TYPE}
        ARCHIVE DESTINATION libs/static/${CMAKE_BUILD_TYPE})
