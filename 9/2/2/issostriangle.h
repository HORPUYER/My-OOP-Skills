#pragma once
#include"RAtriangle.h"

class issostriangle :public RAtriangle {
public:
	issostriangle() {
		figname = "Равнобедренный треугольник";
		a = 10;
		b = 20;
		c = 10;
		A = 50;
		B = 80;
		C = 50;
	}

	std::string get_fn() override;

	int get_cornerA() override;

	int get_cornerB() override;

	int get_cornerC() override;

	int get_sidea() override;

	int get_sideb() override;

	int get_sidec() override;
};