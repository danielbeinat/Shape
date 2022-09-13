#ifndef T_SCALENE_H
#define T_SCALENE_H
#include <iostream>
#include "Triangle.h"

class t_Scalene : public Triangle
{
private:
    float side1, side2, side3, base, height;
public:
    t_Scalene(float,float,float,float,float);
    ~t_Scalene();
    float getPerimeter();
    float getArea();
};



#endif