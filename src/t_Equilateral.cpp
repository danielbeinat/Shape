#include <iostream>
#include "../include/t_Equilateral.h"
using namespace std;




t_Equilateral::t_Equilateral(float side, float base, float height)
{
    this->side = side;
    this->base = base;
    this->height = height;
}

t_Equilateral::~t_Equilateral()
{
}

float t_Equilateral::getPerimeter(){

return 3 * side;


}


float t_Equilateral::getArea(){

return base * height / 2;


}