#include "Polynomial.h"
#include "Birthday.h"

void swap(int& x, int& y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}

int main() {
/*
	Polynomial a, b, c;
	
	a.read();
	b.read();
	c.add(a, b);

	a.display("A = ");
	b.display("B = ");
	c.display("C = A + B = ");
*/
/*
	// 71p. ��ü �迭
	Student eei[10];
	strcpy_s(eei[2].name, "HyungGi Jo");
	eei[2].bDay.month = 2;
	eei[2].bDay.date = 15;
	printf("�̸��� : %s, %d�� %d�� ���Դϴ�. \n", eei[2].name, eei[2].bDay.month, eei[2].bDay.date);
*/
	// 72p. ������ �Ǵ� ���۷�����
	int a = 1, b = 2;
	printf("a = %d, b = %d\n", a, b);
	swap(a, b);
	printf("swap ȣ�� �� , a = %d, b = %d", a, b);
	return 0;


}

