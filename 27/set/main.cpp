import <iostream>;
import math_operations;

int main()
{
    using namespace Math;

    std::cout << "=== КАЛЬКУЛЯТОР С МОДУЛЯМИ ===" << std::endl;
    std::cout << "5 + 3 = " << add(5, 3) << std::endl;
    std::cout << "5 - 3 = " << subtract(5, 3) << std::endl;
    std::cout << "5 * 3 = " << multiply(5, 3) << std::endl;
    std::cout << "5 / 3 = " << divide(5, 3) << std::endl;
    std::cout << "PI = " << PI << std::endl;

    return 0;
}

//g++ main.cpp -o output.exe -std=c++20