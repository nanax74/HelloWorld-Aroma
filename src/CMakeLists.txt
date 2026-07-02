wps_add_executable(HelloWorld main.cpp)

set(WUT $ENV{DEVKITPRO}/wut)
set(WUPS $ENV{DEVKITPRO}/wups)
set(WUMS $ENV{DEVKITPRO}/wums)

target_include_directories(HelloWorld PRIVATE
    ${WUT}/include
    ${WUPS}/include
    ${WUMS}/include
)

set(SPECS_FILES
    "-specs=${WUPS}/share/wups.specs"
)

set(LINKER_SCRIPTS
    "-T${WUPS}/share/wups.ld"
    "-T${WUMS}/share/libmappedmemory.ld"
    "-T${WUMS}/share/libkernel.ld"
)

set(LINKER_FLAGS
    "-g"
)

target_link_options(HelloWorld PRIVATE
    ${SPECS_FILES}
    ${LINKER_SCRIPTS}
    ${LINKER_FLAGS}
)

target_link_directories(HelloWorld PRIVATE
    "${WUT}/lib"
    "${WUPS}/lib"
    "${WUMS}/lib"
)

target_link_libraries(HelloWorld PRIVATE
    notifications
    kernel
    wups
    wut
)