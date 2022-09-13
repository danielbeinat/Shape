#ifndef T_EQUILATERAL_H
#define T_EQUILATERAL_H
#include <iostream>
#include "Triangle.h"
using namespace std;



class t_Equilateral : public Triangle
{
private:
    float side,base,height;
public:
    t_Equilateral(float,float,float);
    ~t_Equilateral();
    float getPerimeter();
    float getArea();
};


#endif
