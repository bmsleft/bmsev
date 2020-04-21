cmake_minimum_required(VERSION 2.8)

project(example)

link_libraries(rt pthread)
add_compile_options(-std=c++17)


file(GLOB_RECURSE SOURCEFILES
    src/*.c*
    )
file(GLOB_RECURSE HEADERFILES
    include/*.h
    )

include_directories(
    ${PROJECT_SOURCE_DIR}/../pine-net/inc
    )

add_executable(${PROJECT_NAME} "main.cpp")

target_link_libraries(${PROJECT_NAME}
    pine-net
    )

set(EXAMPLE_OUTPUT_PATH "${PROJECT_BINARY_DIR}/../output/${PROJECT_NAME}")

## install
install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION ${EXAMPLE_OUTPUT_PATH}/)
install(FILES
    ${PROJECT_BINARY_DIR}/../pine-net/libpine-net.so
    DESTINATION ${EXAMPLE_OUTPUT_PATH}/)
