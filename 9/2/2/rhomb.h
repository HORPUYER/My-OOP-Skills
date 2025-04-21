#pragma once
#include"parallelogram.h"

class rhomb :public parallelogram {
public:
	rhomb() {
		figname = "Ромб";
		a = 30;
		b = 30;
		c = 30;
		d = 30;
		A = 30;
		B = 40;
		C = 30;
		D = 40;
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