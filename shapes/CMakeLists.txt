cmake_minimum_required(VERSION 3.14)
project(shapes LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.17.0
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Collect source files (不包含 main.cpp)
file(GLOB_RECURSE SHAPES_SRC src/*.cpp)
list(FILTER SHAPES_SRC EXCLUDE REGEX "main.cpp$")

add_library(shapes_lib ${SHAPES_SRC})
target_include_directories(shapes_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

# Build main app if main.cpp exists
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp")
    add_executable(shapes_app src/main.cpp)
    target_link_libraries(shapes_app PRIVATE shapes_lib)
    target_include_directories(shapes_app PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)
endif()

# Collect test files
file(GLOB_RECURSE SHAPES_TESTS tests/*.cpp)
if(SHAPES_TESTS)
    add_executable(shapes_tests ${SHAPES_TESTS})
    target_link_libraries(shapes_tests PRIVATE shapes_lib gtest_main)
    target_include_directories(shapes_tests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)
    add_test(NAME ShapesTest COMMAND shapes_tests)
endif()