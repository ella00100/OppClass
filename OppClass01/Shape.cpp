#include "Shape.h"

Shape::Shape(const Shape& s) : id(s.id) {
	cout << "복사 생성자 호출됨" << endl;
	price = s.price;
	x = s.x;
	y = s.y;
	owner = new char[strlen(s.owner) + 1];
}

Shape::Shape(int _id, int don, double x, double y, const char *s) : id(_id) {
	cout << "4인자 생성자 호출됨" << endl;
	price = don;
	this->x = x;
	this->y = y;
	owner = new char[strlen(s) + 1];
	strcpy_s(owner, strlen(owner), s);
}

Shape::~Shape() {
	cout << "소멸자 호출됨 " << endl;
	delete owner;
}

void Shape::setXY(double xx, double yy) {
	x = xx;
	y = yy;
}

void Shape::showPrice() const {
	cout << price << endl;
}