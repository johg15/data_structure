#pragma once
#include <cstring>
// 책 71p.
class Birthday {
public:
	int month;
	int date;
};
class Student {
public:
	char name[100];
	Birthday bDay;		// 다른 클래스를 멤버 변수로
};