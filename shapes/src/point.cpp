#include "point.h"
#include <cmath>

double distance(Point p, Point q) {
    return std::sqrt((p.x - q.x)*(p.x - q.x) + (p.y - q.y) * (p.y - q.y));
}