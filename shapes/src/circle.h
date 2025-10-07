#ifndef  CIRCLE_H
#include "point.h"
#include <cmath>

class Circle {
    public:
        Point center;
        double radius;

        double area();
};

#endif