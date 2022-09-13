#ifndef T_ISOSCELES_H
#define T_ISOSCELES_H
#include <iostream>
#include "Triangle.h"
using namespace std;

class t_Isosceles : public Triangle
{
private:
    float side,side2,base,height;


public:
    t_Isosceles(float,float,float,float);
    ~t_Isosceles();
    float getPerimeter();
    float getArea();

};



#endif