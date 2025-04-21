#include<iostream>
#include<string>
#include"2.h"

int main() {
	setlocale(LC_ALL, "Russian");

	triangle tri;
	std::cout << tri.get_fn() << ":" << std::endl;
	std::cout << "Стороны: а=" << tri.get_sidea() << " b=" << tri.get_sideb() << " c=" << tri.get_sidec() << std::endl;
	std::cout << "Углы: A=" << tri.get_cornerA() << " В=" << tri.get_cornerB() << " С=" << tri.get_cornerC() << std::endl;

	RAtriangle rat;
	std::cout << std::endl << rat.get_fn() << ":" << std::endl;
	std::cout << "Стороны: а=" << rat.get_sidea() << " b=" << rat.get_sideb() << " c=" << rat.get_sidec() << std::endl;
	std::cout << "Углы: A=" << rat.get_cornerA() << " В=" << rat.get_cornerB() << " С=" << rat.get_cornerC() << std::endl;

	issostriangle is;
	std::cout << std::endl << is.get_fn() << ":" << std::endl;
	std::cout << "Стороны: а=" << is.get_sidea() << " b=" << is.get_sideb() << " c=" << is.get_sidec() << std::endl;
	std::cout << "Углы: A=" << is.get_cornerA() << " В=" << is.get_cornerB() << " С=" << is.get_cornerC() << std::endl;

	equitriangle eq;
	std::cout << std::endl << eq.get_fn() << ":" << std::endl;
	std::cout << "Стороны: а=" << eq.get_sidea() << " b=" << eq.get_sideb() << " c=" << eq.get_sidec() << std::endl;
	std::cout << "Углы: A=" << eq.get_cornerA() << " В=" << eq.get_cornerB() << " С=" << eq.get_cornerC() << std::endl;

	quadrangle qu;
	std::cout << std::endl << qu.get_fn() << ":" << std::endl;
	std::cout << "Стороны: а=" << qu.get_sidea() << " b=" << qu.get_sideb() << " c=" << qu.get_sidec() << " d=" << qu.get_sided() << std::endl;
	std::cout << "Углы: A=" << qu.get_cornerA() << " В=" << qu.get_cornerB() << " С=" << qu.get_cornerC() << " D=" << qu.get_cornerD() << std::endl;

	rectangle re;
	std::cout << std::endl << re.get_fn() << ":" << std::endl;
	std::cout << "Стороны: а=" << re.get_sidea() << " b=" << re.get_sideb() << " c=" << re.get_sidec() << " d=" << re.get_sided() << std::endl;
	std::cout << "Углы: A=" << re.get_cornerA() << " В=" << re.get_cornerB() << " С=" << re.get_cornerC() << " D=" << re.get_cornerD() << std::endl;

	square sq;
	std::cout << std::endl << sq.get_fn() << ":" << std::endl;
	std::cout << "Стороны: а=" << sq.get_sidea() << " b=" << sq.get_sideb() << " c=" << sq.get_sidec() << " d=" << sq.get_sided() << std::endl;
	std::cout << "Углы: A=" << sq.get_cornerA() << " В=" << sq.get_cornerB() << " С=" << sq.get_cornerC() << " D=" << sq.get_cornerD() << std::endl;

	parallelogram pa;
	std::cout << std::endl << pa.get_fn() << ":" << std::endl;
	std::cout << "Стороны: а=" << pa.get_sidea() << " b=" << pa.get_sideb() << " c=" << pa.get_sidec() << " d=" << pa.get_sided() << std::endl;
	std::cout << "Углы: A=" << pa.get_cornerA() << " В=" << pa.get_cornerB() << " С=" << pa.get_cornerC() << " D=" << pa.get_cornerD() << std::endl;

	rhomb rh;
	std::cout << std::endl << rh.get_fn() << ":" << std::endl;
	std::cout << "Стороны: а=" << rh.get_sidea() << " b=" << rh.get_sideb() << " c=" << rh.get_sidec() << " d=" << rh.get_sided() << std::endl;
	std::cout << "Углы: A=" << rh.get_cornerA() << " В=" << rh.get_cornerB() << " С=" << rh.get_cornerC() << " D=" << rh.get_cornerD() << std::endl;


}