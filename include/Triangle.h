#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
#include "Shape.h"
using namespace std;

class Triangle : public Shape
{
private:

public:

        virtual float getPerimeter()=0;
        virtual float getArea()=0;
    
};

#endif