#include "triangle.h"
#include "point.h"
#include <cmath>

double Triangle::area() {    // Triangle:: -> prefix
    double a = distance(p, q);
    double b = distance(q, r);
    double c = distance(r, p);

    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
