cmake_minimum_required(VERSION 3.8)
project(awesome_cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set (gtest_disable_pthreads on)

add_subdirectory(lib/googletest-release-1.8.0)
include_directories(lib/googletest-release-1.8.0/googletest/include)




set(SOURCE_FILES

        # src/algs/bubble.cpp
        # src/basic/etc/funcs_and_params.cpp
        # src/basic/etc/palette.cpp
        # src/basic/etc/virtual_funcs.cpp
        # src/basic/namespaces/1.namespaces.cpp
        # src/basic/namespaces/2.namespaces.cpp
        # src/basic/namespaces/3.namespaces.cpp
        # src/basic/operators/arithmetic.cpp
        # src/basic/operators/relational.cpp
        # src/basic/conditional_inclusion.cpp
        # src/basic/define.cpp
        # src/basic/hello.cpp
        # src/basic/io.cpp
        # src/basic/vectors.cpp
        # src/cpp11/use_auto.cpp
        # src/patterns/strategy/strategy.cpp
        src/basic/flow/if_statement.cpp)

add_executable(awesome_cpp ${SOURCE_FILES})

target_link_libraries(awesome_cpp gtest gtest_main)