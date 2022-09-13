#!/bin/bash

## Compilo c+odigo objeto
g++ -Wall -std=c++11 -c ./src/Square.cpp
g++ -Wall -std=c++11 -c ./src/Circle.cpp
g++ -Wall -std=c++11 -c main.cpp 

## Compilo el Binario
g++ Square.o Circle.o main.o -o main.bin

## Limpio los cรณdigos objeto
rm ./*.o
