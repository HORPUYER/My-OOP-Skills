#pragma once
#include"quadrangle.h"

class rectangle :public quadrangle {
public:
	rectangle() {
		figname = "Прямоугольник";
		a = 10;
		b = 20;
		c = 10;
		d = 20;
		A = 90;
		B = 90;
		C = 90;
		D = 90;
	}

	std::string get_fn() override;

	int get_cornerA() override;

	int get_cornerB() override;

	int get_cornerC() override;

	int get_cornerD() override;

	int get_sidea() override;

	int get_sideb() override;

	int get_sidec() override;

	int get_sided() override;
};