#include <iostream>
#include "../include/t_Isosceles.h"
using namespace std;


t_Isosceles::t_Isosceles(float side, float side2, float base, float height)
{
this->side = side;
this->side2 = side2;
this->base = base;
this->height = height;

}

t_Isosceles::~t_Isosceles()
{
}





float t_Isosceles::getPerimeter(){

return 2 * side + side2;


}


float t_Isosceles::getArea(){

return base * height / 2;


}