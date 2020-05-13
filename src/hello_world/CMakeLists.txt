
add_library(hellolib SHARED hello_world.cpp)

target_include_directories(hellolib
    PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include/hello_world>
    PRIVATE
        ${PROJECT_SOURCE_DIR}/src/hello_world
        )

target_compile_options(hellolib PRIVATE -Wall)


install(TARGETS hellolib DESTINATION lib)
# install(FILES hello_world.hpp DESTINATION include)