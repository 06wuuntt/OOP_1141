#include <gtest/gtest.h>
#include <cmath>
#include "../src/point.h"

TEST(ShapeTest, Point) {
    Point p;
    p.x = 0.0;
    p.y = 0.0;
    EXPECT_EQ(0.0, p.x);
    EXPECT_EQ(0.0, p.y);
}

TEST(PointTest, DistanceBetweenTwoPoint) {
    Point p = {0.0, 0.0};  // Initializer
    Point q = {1.0, 1.0};

    EXPECT_NEAR(std::sqrt(2.0), distance(p, q), 0.001);
}

TEST(ShapeTest, Triangle345Case) {
    
}