cmake_minimum_required(VERSION 3.20)
project(Clion)

set(CMAKE_CXX_STANDARD 14)

add_executable(Clion main.cpp cmake-build-debug/swap.cpp ZhiZhen.cpp zhizhen_2.cpp zhizhen_3.cpp zhizhen_4.cpp zhizhen_5.cpp zhizhen_6.cpp zhizhen_8.cpp jiegouti.cpp jiegouti_2.cpp jiegouti_3.cpp jiegouti_4.cpp maopaopaixu.cpp xueshengchengji.cpp test.cpp shujujiegou_1.cpp shujujiegou.cpp)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fexec-charset=GBK")