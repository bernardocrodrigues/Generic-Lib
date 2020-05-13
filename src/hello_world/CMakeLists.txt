
add_library(hellolib SHARED hello_world.cpp)

target_include_directories(hellolib
    PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include/hello_world>
    PRIVATE
        ${PROJECT_SOURCE_DIR}/src/hello_world
        )

target_compile_options(hellolib PRIVATE -Wall)

SET_TARGET_PROPERTIES (hellolib
  PROPERTIES
  VERSION 1.2.3
  SOVERSION 4
)

SET_TARGET_PROPERTIES(hellolib PROPERTIES OUTPUT_NAME "hellolib-5_6")

install(TARGETS hellolib DESTINATION lib)
# install(FILES hello_world.hpp DESTINATION include)