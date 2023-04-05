#pragma once
#include "car.h"

class SportsCar : public Car
{
public:
	bool bTurbo;
	SportsCar() {}			// ������
	~SportsCar() {}			// �Ҹ���
	void setTurbo(bool bTur) {
		bTurbo = bTur;
	}
	void speedUp() {
		if (bTurbo)
			speed += 20;		// �ͺ� ����� ��� 20�� ����
		else
			Car::speedUp();		// �ͺ� ��� �ƴϸ� Car Ŭ������ speedUp�Լ� ���
	}
};