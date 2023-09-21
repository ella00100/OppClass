#pragma once

#ifndef SHAPE_H_
#define SHAPE_H_

#include <iostream>
using std::cout;
using std::endl;

class Shape {
private:
	int price;
public:
	double x, y;
	char* owner;

	Shape(int don = 0, double x = 0, double y = 0, const char* s = "you");
	~Shape();
	void setXY(double xx, double yy);
	void setPrice(int don);
};

#endif;