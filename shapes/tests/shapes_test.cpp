#include <gtest/gtest.h>
#include <cmath>
#include "../src/point.h"
#include "../src/triangle.h"
#include "../src/circle.h"

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

TEST(ShapeTest, TriangleAreaTest) {
    Point p = {0.0, 0.0};
    Point q = {3.0, 0.0};
    Point r = {0.0, 4.0};

    Triangle t = {p, q, r};
    EXPECT_NEAR(6.0, t.area(), 0.001);
}

TEST(ShapeTest, CircleTest) {
    Point center = {0.0, 0.0};
    Circle c = {center, 5.0};

    EXPECT_NEAR(78.54, c.area(), 0.001);
}

TEST(ShapeTest, SortIntegers) {
    std::vector<int> v = {4, 2, 5, 1, 3};
    std::sort(v.begin(), v.end());
    EXPECT_EQ(1, v[0]);
    EXPECT_EQ(2, v[1]);
    EXPECT_EQ(3, v[2]);
    EXPECT_EQ(4, v[3]);
    EXPECT_EQ(5, v[4]);
}

TEST(ShapeTest, SortIntegersInArray) {
    int a[] = {4, 2, 5, 1, 3};
    std::sort(a, a+5);
    EXPECT_EQ(1, a[0]);
    EXPECT_EQ(2, a[1]);
    EXPECT_EQ(3, a[2]);
    EXPECT_EQ(4, a[3]);
    EXPECT_EQ(5, a[4]);
}