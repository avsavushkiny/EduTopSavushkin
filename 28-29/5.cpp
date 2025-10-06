#include <iostream>
using namespace std;

// Передача по значению (создается копия)
int squareByValue(int number)
{
    return number * number;
}

// Передача по ссылке (работаем с оригиналом)
void incrementByReference(int &number)
{
    number++;
}

// Передача по указателю
void multiplyByPointer(int *number, int multiplier)
{
    *number = *number * multiplier;
}

// Процедура с несколькими параметрами
void swapNumbers(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Функция с параметрами по умолчанию
double calculatePrice(double basePrice, double taxRate = 0.20, double discount = 0.0)
{
    double priceAfterDiscount = basePrice * (1 - discount);
    return priceAfterDiscount * (1 + taxRate);
}

int main()
{
    int num = 5;

    // По значению - оригинал не меняется
    cout << "Квадрат: " << squareByValue(num) << endl;
    cout << "Оригинал: " << num << endl;

    // По ссылке - оригинал меняется
    incrementByReference(num);
    cout << "После increment: " << num << endl;

    // По указателю - оригинал меняется
    multiplyByPointer(&num, 3);
    cout << "После умножения: " << num << endl;

    // Обмен значений
    int x = 10, y = 20;
    cout << "До swap: x=" << x << ", y=" << y << endl;
    swapNumbers(x, y);
    cout << "После swap: x=" << x << ", y=" << y << endl;

    // Параметры по умолчанию
    cout << "Цена: " << calculatePrice(100.0) << endl;
    cout << "Цена со скидкой: " << calculatePrice(100.0, 0.20, 0.1) << endl;

    return 0;
}