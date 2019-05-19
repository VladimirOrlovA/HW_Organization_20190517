#pragma once
#include "Employee_.h"

class Designer_ :
	public Employee_
{
	int cntProgs;
public:
	Designer_(string name, int age, int exp, int cntProg)
		: Employee_(name, age, exp)
	{
		this->cntProgs = cntProg;
	}
	double getCoeff() const override {
		double expCoeff = (double)this->getExperience()*0.1;
		double cntL = (double)cntProgs / 6;
		return 1 + expCoeff + cntL;
	}
	int setLang(int cntLang) { this->cntProgs = cntLang; }
	void setCntProg(int cntLangs) { this->cntProgs = cntLangs; }
	double getCntProg()const { return this->cntProgs; }

	void info() const override
	{
		Employee_::info();
		cout << "\nknow programs: " << this->cntProgs << endl;
	}
};

