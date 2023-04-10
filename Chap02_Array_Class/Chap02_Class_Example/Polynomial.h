#pragma once
#include <cstdio>
#include <vector>	// STL vector ���̺귯��
#include <iostream>	// input output stream
#define MAX_DEGREE 100
using namespace std;	

class PolynomialV {
	//std::vector <float> coef;
	vector <float> coef;
public:
	int degree() {
		return coef.size();		// coef vector�� ũ�� ��ȯ
	}
	void read() {
		int deg;
		float value;		
		printf("���׽��� �ְ� ������ �Է��ϼ���: ");
		scanf_s("%d", &deg);		// degree�� Ű���� �Է� �� �ֱ�
		printf("�� ���� ����� �Է��ϼ��� (�� %d��): ", deg + 1);
		for (int i = 0; i <= deg; i++)
		{
			scanf_s("%f", &value);
			coef.push_back(value);
		}
	}
};


class Polynomial {
	int degree;				// ���׽��� �ְ� ����
	float coef[MAX_DEGREE];	// �� �׿� ���� ��� (Coefficient)

public:
	// ������ (Constructor)
	Polynomial() {
		degree = 0;			// degree 0���� �ʱ�ȭ
		coef[0] = 0.0f;		// coef �迭�� 0��° 0.0f�� �ʱ�ȭ 
	}
	// Polynomial () : degree(0) {};

	void read() {
		printf("���׽��� �ְ� ������ �Է��ϼ���: ");
		scanf_s("%d", &degree);		// degree�� Ű���� �Է� �� �ֱ�
		printf("�� ���� ����� �Է��ϼ��� (�� %d��): ", degree + 1);
		for (int i = 0; i <= degree; i++)
		{
			scanf_s("%f", coef + i);
		}
	}
	void display(const char* str = "Poly = ") {
		printf("\t%s", str);
		for (int i = 0; i < degree; i++)
			printf("%5.1f x^%d + ", coef[i], degree - i);

		printf("%4.1f\n", coef[degree]);
	}
	void add(Polynomial a, Polynomial b) {
		if (a.degree > b.degree) {
			*this = a;		// a ���׽��� ���ο� ����
			for (int i = 0; i <= b.degree; i++)
				coef[i + (degree - b.degree)] += b.coef[i];
		}
		else {
			*this = b;		// b ���׽��� ���ο� ����
			for (int i = 0; i <= a.degree; i++)
				coef[i + (degree - a.degree)] += a.coef[i];
		}
	}
	bool isZero() {
		return degree == 0;
	}
	// ��� ������ ���ؼ� ����� ��ȣ ����
	void negate() {
		for (int i = 0; i < degree; i++)
			coef[i] = -coef[i]; 
	}

};