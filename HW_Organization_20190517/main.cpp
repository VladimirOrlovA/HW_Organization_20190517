#include"Organization_.h"
#include"Administrator_.h"
#include"Designer_.h"
#include"Developer_.h"

class junior :public Developer_ {
public:
	junior(string name, int age)
		:Developer_(name,age,0,0){}
	double getCoeff() const override { return 0.5; }
};

void main() {
	Organization_ o("Itstep", 1000);
	o.addEmployee(new Developer_("Petya", 25, 3, 5));
	o.addEmployee(new Designer_("Katya", 18, 0, 2));
	o.addEmployee(new Administrator_("Mike", 35, 10, 1000, 10));
	o.addEmployee(new junior("qwerty", 20));
	//o.info();
	o.removeEmployee(3);
	//o.removeEmployee(1);
	//o.removeEmployee(2);
	cout << endl;
	system("pause");
}