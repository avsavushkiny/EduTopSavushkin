#include <iostream>
using namespace std;

class Calculator
{
private:
    double memory;

public:
    // Конструктор (специальная процедура)
    Calculator() : memory(0.0) {}

    // Процедура - устанавливает значение
    void setMemory(double value)
    {
        memory = value;
    }

    // Функция - возвращает значение
    double getMemory() const
    {
        return memory;
    }

    // Функции для вычислений
    double add(double a, double b)
    {
        return a + b;
    }

    double subtract(double a, double b)
    {
        return a - b;
    }

    // Процедура для вывода информации
    void displayInfo() const
    {
        cout << "Текущее значение в памяти: " << memory << endl;
    }

    // Процедура для сложных операций
    void complexOperation(double a, double b)
    {
        double result = add(a, b) * subtract(a, b);
        memory = result;
        cout << "Результат операции: " << result << endl;
    }
};

int main()
{
    Calculator calc;

    // Использование функций
    cout << "5 + 3 = " << calc.add(5, 3) << endl;
    cout << "5 - 3 = " << calc.subtract(5, 3) << endl;

    // Использование процедур
    calc.setMemory(42.5);
    calc.displayInfo();

    calc.complexOperation(10, 4);
    calc.displayInfo();

    return 0;
}