#include <iostream>

enum month {
    январь = 1,
    февраль,
    март,
    апрель,
    май,
    июнь,
    июль,
    август,
    сентябрь,
    октябрь,
    ноябрь,
    декабрь
};

int main() {
    int num;
    std::cout << 5000 - (5000 / 100 * 3) << std::endl;
    std::cout << 5000 - (5000 % 3);
    setlocale(LC_ALL, "Russian");

    while (true) {

        std::cout << "Введите номер месяца: ";
        std::cin >> num;

        if (num < 0 || num > 12) {
            std::cout << "Неправильный номер!" << std::endl;
        }

        else if (num == 0) {
            std::cout << "До свидания";
            break;
        }

        else {
            switch (num) {
            case январь:
                std::cout << "январь" << std::endl;
                break;
            case февраль:
                std::cout << "февраль" << std::endl;
                break;
            case март:
                std::cout << "март" << std::endl;
                break;
            case апрель:
                std::cout << "апрель" << std::endl;
                break;
            case май:
                std::cout << "май" << std::endl;
                break;
            case июнь:
                std::cout << "июнь" << std::endl;
                break;
            case июль:
                std::cout << "июль" << std::endl;
                break;
            case август:
                std::cout << "август" << std::endl;
                break;
            case сентябрь:
                std::cout << "сентябрь" << std::endl;
                break;
            case октябрь:
                std::cout << "октябрь" << std::endl;
                break;
            case ноябрь:
                std::cout << "ноябрь" << std::endl;
                break;
            case декабрь:
                std::cout << "декабрь" << std::endl;
                break;
            }

        }

    }

}