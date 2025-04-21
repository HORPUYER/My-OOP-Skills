#pragma once
#include<string>

class quadrangle {

protected:
	std::string figname;
	int a, b, c, d, A, B, C, D;

public:
	quadrangle() {
		figname = "Четырёхугольник";
		a = 10;
		b = 20;
		c = 30;
		d = 40;
		A = 50;
		B = 60;
		C = 70;
		D = 80;
	}

	virtual std::string get_fn();

	virtual int get_cornerA();

	virtual int get_cornerB();

	virtual int get_cornerC();

	virtual int get_cornerD();

	virtual int get_sidea();

	virtual int get_sideb();

	virtual int get_sidec();

	virtual int get_sided();
};