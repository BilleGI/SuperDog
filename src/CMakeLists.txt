cmake_minimum_required(VERSION 3.5)

add_executable(SuperDog main.cpp ${MY_INCLUDE_DIR}/dog.h dog.cpp ${MY_INCLUDE_DIR}/talent.h talent.cpp
    ${MY_INCLUDE_DIR}/swimming.h swimming.cpp ${MY_INCLUDE_DIR}/dancing.h dancing.cpp ${MY_INCLUDE_DIR}/counting.h counting.cpp)

target_include_directories(SuperDog PUBLIC ${MY_INCLUDE_DIR})
