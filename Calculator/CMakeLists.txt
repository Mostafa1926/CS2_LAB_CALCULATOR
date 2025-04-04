cmake_minimum_required(VERSION 3.10)    

project(CS2-Calculator)

set(SOURCE_FILES                       
    Calculator.cpp
    test.cpp	   
)

add_executable(CalcTest  ${SOURCE_FILES})
