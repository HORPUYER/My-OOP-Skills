#include <iostream>
#include <string>
#include "Header.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    std::string pme;

    int num;
    std::string yon;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите da или net: ";
    std::cin >> yon;

    if (yon == "da") {

        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> num;

    }

    else {
        num = 1;
    }

    Counter Counter(num);

    while (true) {

        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> pme;

        if (pme == "+") {
            Counter.plus();
        }

        else if (pme == "-") {
            Counter.minus();
        }

        else if (pme == "=") {
            std::cout << Counter.equally() << std::endl;
        }

        else if (pme == "x") {
            std::cout << "До свидания!";
            break;
        }
    }
}