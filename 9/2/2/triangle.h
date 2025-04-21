#pragma once
#include<string>

class triangle {

protected:
	std::string figname;
	int a, b, c, A, B, C;
public:
	triangle() {
		figname = "Треугольник";
		a = 10;
		b = 20;
		c = 30;
		A = 50;
		B = 60;
		C = 70;
	}

	virtual std::string get_fn();

	virtual int get_cornerA();

	virtual int get_cornerB();

	virtual int get_cornerC();

	virtual int get_sidea();

	virtual int get_sideb();

	virtual int get_sidec();
};