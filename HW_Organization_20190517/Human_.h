#pragma once
#include<iostream>
#include<string>
using namespace std;

class Human_
{
	string name;
	int age;
public:
	Human_(string name, int age) {
		this->name = name;
		this->age = age;
	}
	void setName(string name) { this->name = name; }
	void setAge(int age) { this->age = age; }
	string getName()const { this->name; }
	int getAge()const { this->age; }

	virtual void info()const {
		cout << "name: " << name << "\nAge: " << age << endl;
	}
};