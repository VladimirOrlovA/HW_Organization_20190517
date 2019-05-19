#pragma once
#include "Employee_.h"

class Developer_ :
	public Employee_
{
	int cntLangs;
public:
	Developer_(string name, int age, int exp, int cntLang)
		: Employee_(name, age, exp)
	{
		this->cntLangs = cntLang;
	}
		double getCoeff() const override {
		double expCoeff = (double)this->getExperience()*0.3;
		double cntL = (double)cntLangs / 2;
		return (double)1 + expCoeff + cntL;
	}
	int setLang(int cntLang) { this->cntLangs=cntLang; }
	void setCntLang(int cntLang) { this->cntLangs = cntLangs; }
	double getCntLangs()const { return this->cntLangs; }
	
	void info() const override
	{
		Employee_::info();
		cout << "\nknow languages: " << this->cntLangs << endl;
	}
};

