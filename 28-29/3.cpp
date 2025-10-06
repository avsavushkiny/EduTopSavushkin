#include <iostream>
#include <cmath>
using namespace std;

// ФУНКЦИЯ - возвращает значение
double calculateCircleArea(double radius)
{
    return 3.14159 * radius * radius;
}

// ФУНКЦИЯ - возвращает результат вычислений
int findMax(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

// ПРОЦЕДУРА - не возвращает значение
void printWelcomeMessage(string name)
{
    cout << "Добро пожаловать, " << name << "!" << endl;
    cout << "Мы рады вас видеть!" << endl;
    // return; // Необязателен для void функций
}

// ПРОЦЕДУРА - выводит информацию
void displayResults(double area, int max)
{
    cout << "=== РЕЗУЛЬТАТЫ ===" << endl;
    cout << "Площадь круга: " << area << endl;
    cout << "Максимальное число: " << max << endl;
    cout << "==================" << endl;
}

int main()
{
    // Использование процедуры
    printWelcomeMessage("Анна");

    // Использование функций
    double area = calculateCircleArea(5.0);
    int maximum = findMax(10, 25);

    // Использование процедуры для вывода
    displayResults(area, maximum);

    return 0;
}