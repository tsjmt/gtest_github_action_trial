cmake_minimum_required(VERSION 3.14)
project(test)
# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.8.1.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include_directories(..)
add_executable(UnionFind_test UnionFind_test.cpp ../UnionFind.cpp)
target_link_libraries(UnionFind_test gtest_main)

enable_testing()
include(GoogleTest)
gtest_discover_tests(UnionFind_test)