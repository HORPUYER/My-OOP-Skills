#pragma once
#include "triangle.h"

class equitriangle :public triangle {
public:
	equitriangle() {
		figname = "Равносторонний треугольник";
		a = 30;
		b = 30;
		c = 30;
		A = 60;
		B = 60;
		C = 60;
	}

	std::string get_fn() override;

	virtual int get_cornerA() override;

	virtual int get_cornerB() override;

	virtual int get_cornerC() override;

	virtual int get_sidea() override;

	virtual int get_sideb() override;

	virtual int get_sidec() override;
};