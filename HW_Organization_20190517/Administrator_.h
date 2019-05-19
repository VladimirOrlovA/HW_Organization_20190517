#pragma once
#include "Employee_.h"

class Administrator_ :
	public Employee_
{
	int cntComps;
	int cntServs;
public:
	Administrator_(string name, int age, int exp, int cntComp, int cntServ)
		: Employee_(name, age, exp)
	{
		this->cntComps = cntComp;
		this->cntServs = cntServ;
	}
	double getCoeff() const override {
		double expCoeff = (double)this->getExperience()*0.2;
		double cntC = (double)cntComps / 100;
		double cntS = (double)cntServs / 2;
		return 1 + expCoeff + cntC+ cntS;
	}
	void setComps(int cntComp) { this->cntComps = cntComp; }
	void setServs(int cntServ) { this->cntServs = cntServ; }
	int getComps() { this->cntComps; }
	int getServs() { this->cntServs; }
		
	void setCntComps(int cntComp) { this->cntComps = cntComp; }
	void setCntServs(int cntServ) { this->cntServs = cntServ; }
	double getCntComps()const { return this->cntComps; }
	double getCntServs()const { return this->cntServs; }

	void info() const override
	{
		Employee_::info();
		cout << "\ncomputers: " << this->cntComps << endl;
		cout << "servers: " << this->cntServs << endl;
	}
};

