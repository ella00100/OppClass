#include "Shape.h"

Shape::Shape(const Shape& s) : id(s.id) {
	cout << "���� ������ ȣ���" << endl;
	price = s.price;
	x = s.x;
	y = s.y;
	owner = new char[strlen(s.owner) + 1];
}

Shape::Shape(int _id, int don, double x, double y, const char *s) : id(_id) {
	cout << "4���� ������ ȣ���" << endl;
	price = don;
	this->x = x;
	this->y = y;
	owner = new char[strlen(s) + 1];
	strcpy_s(owner, strlen(owner), s);
}

Shape::~Shape() {
	cout << "�Ҹ��� ȣ��� " << endl;
	delete owner;
}

void Shape::setXY(double xx, double yy) {
	x = xx;
	y = yy;
}

void Shape::showPrice() const {
	cout << price << endl;
}