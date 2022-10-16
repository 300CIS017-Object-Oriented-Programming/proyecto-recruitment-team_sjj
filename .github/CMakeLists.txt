cmake_minimum_required(VERSION 3.19)
project(RecruiterSoftware)

set(CMAKE_CXX_STANDARD 14)

add_executable(RecruiterSoftware NationalHolidays.cpp NationalHolidays.h Nationality.cpp Nationality.h Intervierw.cpp Intervierw.h Candidato.cpp Candidato.h Sistema.cpp Sistema.h main.cpp)