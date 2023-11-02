#include <iostream>
using namespace std;

#define STU_NUMBER 1
#define REG_NUMBER 2

struct student {
	int type;
	union {
		int stu_number;
		char reg_number[15];
	} id;
	char name[20];
};

void print(struct student s)
{
	switch (s.type) {
	case STU_NUMBER:
		cout << "SID: " << s.id.stu_number;
		cout << " Name: " << s.name << endl;
		break;
	case REG_NUMBER:
		cout << "SID: " << s.id.reg_number;
		cout << " Name: " << s.name << endl;
		break;
	default:
		cout << "type error" << endl;
		break;
	}
}

int main() {
	struct student s1, s2;

	s1.type = STU_NUMBER;
	s1.id.stu_number = 20070001;
	strcpy_s(s1.name, "Hong");

	s2.type = REG_NUMBER;
	strcpy_s(s2.id.reg_number, "860101-1058031");
	strcpy_s(s2.name, "Kim");

	print(s1);
	print(s2);

	return 0;
}