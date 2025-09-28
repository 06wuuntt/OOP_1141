cmake_minimum_required(VERSION 3.14)
project(shapes LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG    v1.17.0
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Collect source files
file(GLOB_RECURSE SHAPES_SRC src/*.cpp)
if(SHAPES_SRC)
    add_library(shapes_lib ${SHAPES_SRC})
    target_include_directories(shapes_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
endif()

# Build main app if main.cpp exists
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp" AND TARGET shapes_lib)
    add_executable(shapes_app src/main.cpp)
    target_link_libraries(shapes_app PRIVATE shapes_lib)
    target_include_directories(shapes_app PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)
endif()

# Collect test files
file(GLOB_RECURSE SHAPES_TESTS tests/*.cpp)
if(SHAPES_TESTS)
    add_executable(shapes_tests ${SHAPES_TESTS})
    if(TARGET shapes_lib)
        target_link_libraries(shapes_tests PRIVATE shapes_lib gtest_main)
    else()
        target_link_libraries(shapes_tests PRIVATE gtest_main)
    endif()
    target_include_directories(shapes_tests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)
    add_test(NAME ShapesTest COMMAND shapes_tests)
endif()