cmake_minimum_required(VERSION 2.8)

project(pine-net)

link_libraries(rt pthread)
add_compile_options(-fPIC)
add_compile_options(-std=c++17)


file(GLOB_RECURSE SOURCEFILES
    src/*.c*
    )
file(GLOB_RECURSE HEADERFILES
    include/*.h
    )


add_library(${PROJECT_NAME} SHARED ${SOURCEFILES} ${HEADERFILES})

set(OUTPUT_PATH "${PROJECT_BINARY_DIR}/../output/${PROJECT_NAME}")

## install
install(TARGETS ${PROJECT_NAME} DESTINATION ${OUTPUT_PATH}/lib/)
install(DIRECTORY inc DESTINATION ${OUTPUT_PATH})
