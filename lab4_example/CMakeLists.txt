cmake_minimum_required(VERSION 3.13)
project(lab4_example)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab4_example main.cpp Osoba.h Pojazd.h Osoba.cpp Pojazd.cpp Rower.cpp Rower.h PojazdSilnikowy.cpp PojazdSilnikowy.h PojazdOsobowy.cpp PojazdOsobowy.h)