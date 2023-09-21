#include "Shape.h"

Shape::Shape(int don, double x, double y, const char* s) {
	cout << "4ÀÎÀÚ »ý¼ºÀÚ È£ÃâµÊ" << endl;
	price = don;
	this->x = x;
	this->y = y;
	owner = new char[strlen(s) + 1];
	strcpy_s(owner, strlen(owner), s);
}

Shape::~Shape() {
	cout << "¼Ò¸êÀÚ È£ÃâµÊ " << endl;
	delete owner;
}

void Shape::setXY(double xx, double yy) {
	x = xx;
	y = yy;
}

void Shape::setPrice(int don) {
	price = don;
}