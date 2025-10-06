#include <iostream>
using namespace std;

// Рекурсивная ФУНКЦИЯ - факториал
long long factorial(int n)
{
    if (n <= 1)
        return 1;                // базовый случай
    return n * factorial(n - 1); // рекурсивный вызов
}

// Рекурсивная ФУНКЦИЯ - числа Фибоначчи
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Рекурсивная ПРОЦЕДУРА - обратный отсчет
void countdown(int n)
{
    if (n < 0)
        return; // базовый случай
    cout << n << "... ";
    countdown(n - 1); // рекурсивный вызов
}

// Рекурсивная ПРОЦЕДУРА - вывод числа прописью
void printNumberInWords(int number)
{
    string words[] = {"ноль", "один", "два", "три", "четыре", "пять"};

    if (number < 0 || number > 5)
    {
        cout << "неизвестно";
        return;
    }

    cout << words[number];
}

int main()
{
    // Рекурсивные функции
    cout << "5! = " << factorial(5) << endl;
    cout << "F(6) = " << fibonacci(6) << endl;

    // Рекурсивные процедуры
    cout << "Обратный отсчет: ";
    countdown(5);
    cout << "Пуск!" << endl;

    cout << "Число 3 прописью: ";
    printNumberInWords(3);
    cout << endl;

    return 0;
}