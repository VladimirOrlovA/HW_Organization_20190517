#pragma once
#include"Employee_.h"
#include<vector>

class Organization_
{
	vector<Employee_*> emps;
	int salary;
	string name;

public:
	Organization_(string name, int salary) {
		this->name = name;
		this->salary = salary;
	}
	void setName(string name) { this->name = name; }
	void setSalary(int salary) { this->salary = salary; }
	string getName() const { return this->name; }
	int getSalary() const { return this->salary; }

	void info() {
		cout << "Organization " << name
			<< "\nSalary: " << salary << "$";
		for (Employee_*e : emps) {
			cout << "\n----------------------\n";
			cout << "position: " << string(typeid(*e).name()).substr(6) << endl;
			e->info();
			cout << "\nsalary: " << e->getCoeff()*salary << " $";
		}
	}

	void addEmployee(Employee_*e) {
		emps.push_back(e);
	}

	void removeEmployee(int index) {
		int count = 0;
		for (Employee_*e : emps) {
			if (count == index) {
				delete e;
				break;
			}
			count++;
		}
		emps.erase(emps.cbegin() + count);
	}

	double getAllSalary() {
		double allCoef = 0;
		for (Employee_*e : emps) {
			allCoef += e->getCoeff();
		}
	}

	Organization_(const Organization_&) = delete;
	Organization_& operator=(const Organization_&) = delete;

	~Organization_() {
		for (Employee_*e : emps) {
			delete e;
		}
	}
};

