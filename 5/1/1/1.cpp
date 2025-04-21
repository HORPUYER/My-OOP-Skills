#include <iostream>
#include "Math.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	int num1;
	int num2;
	int ans;
	std::cout << "Введите первое число: ";
	std::cin >> num1;
	std::cout << "Введите второе число число: ";
	std::cin >> num2;
	std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> ans;
	power_2(num1, num2, ans);
}