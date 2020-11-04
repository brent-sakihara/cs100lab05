#ifndef __RECTANGLE_TEST_HPP__
#define __RECTANGLE_TEST_HPP__

#include "gtest/gtest.h"

#include "rectangle.hpp"

TEST(ConstructorTest, testWidth) {
    Rectangle* test = new Rectangle(5, 4);
    EXPECT_EQ(test->getWidth(), 5);
}

TEST(ConstructorTest, testHeight) {
    Rectangle* test = new Rectangle(5, 4);
    EXPECT_EQ(test->getHeight(), 4);
}

TEST(ConstructorTest, zeroTest) {
    Rectangle* test = new Rectangle(0, 0);
    EXPECT_EQ(test->getWidth(), 0);
}

TEST(ConstructorTest, largeNumberTest) {
    Rectangle* test = new Rectangle(10, 64);
    EXPECT_EQ(test->getHeight(), 64);
}

TEST(AreaTest, smallArea) {
    Rectangle* test = new Rectangle(5, 4);
    EXPECT_EQ(test->area(), 20);
}

TEST(AreaTest, bigArea) {
    Rectangle* test = new Rectangle(13, 12);
    EXPECT_EQ(test->area(), 156);
}

TEST(AreaTest, zeroArea) {
    Rectangle* test = new Rectangle(1000, 0);
    EXPECT_EQ(test->area(), 0);
}

TEST(AreaTest, squareArea) {
    Rectangle* test = new Rectangle(9, 9);
    EXPECT_EQ(test->area(), 81);
}

TEST(PerimeterTest, smallPerimeter) {
    Rectangle* test = new Rectangle(5, 4);
    EXPECT_EQ(test->perimeter(), 18);
}

TEST(PerimeterTest, bigPerimeter) {
    Rectangle* test = new Rectangle(120, 50);
    EXPECT_EQ(test->perimeter(), 340);
}

TEST(PerimeterTest, zeroAndNonzero) {
    Rectangle* test = new Rectangle(0, 5);
    EXPECT_THROW(test->perimeter(),std::runtime_error);
}

TEST(PerimeterTest, largePerimeter) {
    Rectangle* test = new Rectangle(21, 16);
    EXPECT_EQ(test->perimeter(), 74);
}


#endif
