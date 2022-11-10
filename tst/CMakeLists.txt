cmake_minimum_required(VERSION 3.23)
project(RecruiterSoftware)
set(BINARY ${CMAKE_PROJECT_NAME}_tst)

file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp)

set(SOURCES ${TEST_SOURCES})

add_executable(${BINARY} ${TEST_SOURCES})

target_link_libraries(${BINARY} PUBLIC ${CMAKE_PROJECT_NAME}_lib gtest)

add_test(NAME ${BINARY} COMMAND ${BINARY})

enable_testing()

include(googleTest)
gtest_discover_tests(${BINARY})