#pragma once
#include <iostream>
#include <string>
using namespace std;

class Pet {
protected:
	string name;
	int age;
	string type; 

public:
	// »ý¼ºÀÚ
	Pet(string name, int age, string type)
		: name(name), age(age), type(type) {}

	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
	string getType() {
		return type;
	}
};

class Puppy : public Pet {
private:
	string breed;

public:
	Puppy(string name, int age, string type, string breed)
		: Pet(name, age, type), breed(breed) {}

	string getBreed() {
		return breed;
	}
};