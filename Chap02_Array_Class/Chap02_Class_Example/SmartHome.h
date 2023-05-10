#pragma once
#include <iostream>
#include <string>
using namespace std;

class SmartHome {
private:
	string owner;	// ������ �̸�
	int temperature;
	int humidity;
	bool security;	// ���� �ý��� ���� (true: �۵���, false: ��Ȱ��)

public:
	SmartHome(string owner, int temperature, int humidity, bool security) {
		this->owner = owner;
		this->temperature = temperature;
		this->humidity = humidity;
		this->security = security;
	}

	//SmartHome(string o, int t, int h, bool s) {
	//	owner = o;
	//	temperature = t;
	//	humidity = h;
	//	security = s;
	//}

	void setTemperature(int temperature) {
		this->temperature = temperature;
	}
	void setHumidity(int humidity) {
		this->humidity = humidity;
	}
	void setSecurity(int security) {
		this->security = security;
	}
	int getTemperature() {
		return this->temperature;
	}
	int getHumidity() {
		return this->humidity;
	}
	bool getSecurity() {
		return this->security;
	}
	void printStatus() {
		cout << "������: " << owner << endl;
		cout << "�µ�: " << temperature << "��" << endl;
		cout << "����: " << humidity << "%" << endl;
		if (security) {
			cout << "���� �ý��� �۵���" << endl;
		}
		else
			cout << "���� �ý��� ����" << endl;
	}



};