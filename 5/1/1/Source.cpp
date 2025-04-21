#include <iostream>
#include "Math.h"

void power_2(int a, int b, int ans) {
    if (ans == 1) {
        std::cout << a << " + " << b << " = " << a + b << std::endl;
    }

    else if (ans == 2) {
        std::cout << a << " - " << b << " = " << a - b << std::endl;
    }

    else if (ans == 3) {
        std::cout << a << " * " << b << " = " << a * b << std::endl;
    }

    else if (ans == 4) {
        std::cout << a << " / " << b << " = " << a / b << std::endl;
    }
    else {
        int nuum = a;
        for (int i = 0; i < b - 1; i++) {
            nuum *= a;
        }
        std::cout << a << " в степени " << b << " = " << nuum << std::endl;
    }
}