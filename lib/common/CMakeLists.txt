configure_file(${CMAKE_CURRENT_SOURCE_DIR}/headers/version.h.in ${CMAKE_CURRENT_SOURCE_DIR}/headers/version.h)
set(version_file "${CMAKE_CURRENT_SOURCE_DIR}/headers/version.h")

INSTALL(FILES ${CMAKE_CURRENT_SOURCE_DIR}/headers/version.h
        DESTINATION "libs/include"
        )
