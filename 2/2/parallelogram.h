#pragma once
#include <string>

class parallelogram {
protected:
	std::string figname;
	int a, b, c, d, A, B, C, D;

public:
	parallelogram() {
		figname = "ֿאנאככוכמדנאלל";
		a = 20;
		b = 30;
		c = 20;
		d = 30;
		A = 30;
		B = 40;
		C = 30;
		D = 40;
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