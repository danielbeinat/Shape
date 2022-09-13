:: Compilo c+odigo objeto
 g++ -Wall -std=c++11 -c .\src\Square.cpp
 g++ -Wall -std=c++11 -c .\src\Circle.cpp
 g++ -Wall -std=c++11 -c .\src\t_Equilateral.cpp
 g++ -Wall -std=c++11 -c .\src\t_Isosceles.cpp
 g++ -Wall -std=c++11 -c .\src\t_Scalene.cpp






 g++ -Wall -std=c++11 -c main.cpp 

:: Compilo el Binario
 g++ Square.o Circle.o t_Equilateral.o t_Isosceles.o t_Scalene.o main.o -o main.exe

:: Limpio los códigos objeto
DEL .\*.o