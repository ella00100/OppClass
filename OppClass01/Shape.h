#pragma once

#ifndef SHAPE_H_
#define SHAPE_H_

#include <iostream>
using std::cout;
using std::endl;

class Shape {
private:
    const int id;
    int price;
    double x, y;

public:
    char* owner;
    Shape(const Shape& s);
    Shape(int _id, int don = 0, double x = 0, double y = 0, const char* s = "you");
    ~Shape();

    void setXY(double xx, double yy);
    void showPrice() const;
};

#endif // SHAPE_H_
