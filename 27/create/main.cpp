import math; // Импорт модуля
import <iostream>;

int main()
{
    std::cout << "5 + 3 = " << add(5, 3) << std::endl;
    std::cout << "5 * 3 = " << multiply(5, 3) << std::endl;
    // internal_helper(); // ОШИБКА! Не экспортирована
    return 0;
}