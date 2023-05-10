#pragma once
#include <iostream>
#include <string>
using namespace std;

class SmartHome {
private:
	string owner;	// 집주인 이름
	int temperature;
	int humidity;
	bool security;	// 보안 시스템 상태 (true: 작동중, false: 비활성)

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
		cout << "집주인: " << owner << endl;
		cout << "온도: " << temperature << "도" << endl;
		cout << "습도: " << humidity << "%" << endl;
		if (security) {
			cout << "보안 시스템 작동중" << endl;
		}
		else
			cout << "보안 시스템 해제" << endl;
	}



};