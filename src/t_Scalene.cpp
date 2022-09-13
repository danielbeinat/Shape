#include <iostream>
#include "../include/t_Scalene.h"
using namespace std;


t_Scalene::t_Scalene(float side1, float side2, float side3, float base, float height)
{

    this->side1 = side1;
    this->side2 = side2;
    this->side3 = side3;
    this->base = base;
    this->height = height;

}

t_Scalene::~t_Scalene()
{
}


float t_Scalene::getPerimeter(){

    return side1 + side2 + side3;



}


float t_Scalene::getArea(){

    return base * height / 2;




}