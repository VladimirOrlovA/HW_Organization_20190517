#pragma once
#include "Human_.h"

class Employee_ abstract:
	public Human_
{
	int experience;
public:
	Employee_(string name, int age, int exp)
	: Human_(name,age)
	{
		this->experience = exp;
	}
	void setExperience(int exp) { this->experience = exp; }
	int getExperience() const { return this->experience; }
	virtual double getCoeff() const = 0;
	void info()const override {
		Human_::info();
		cout << "experience: " << experience << " years";
	}
};

