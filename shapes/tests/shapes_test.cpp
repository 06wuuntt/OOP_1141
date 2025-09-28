#include <gtest/gtest.h>
#include "../src/point.h"

TEST(ShapeTest, Point) {
    Point p;
    p.x = 0.0;
    p.y = 0.0;
    EXPECT_EQ(0.0, p.x);
    EXPECT_EQ(0.0, p.y);
}

TEST(ShapeTest, Triangle345Case) {

}