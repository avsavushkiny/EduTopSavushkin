#include <iostream>
#include <string>
using namespace std;

// Функция возвращает int
int add(int a, int b)
{
    return a + b;
}

// Функция возвращает double
double calculateAverage(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

// Функция возвращает bool
bool isEven(int number)
{
    return number % 2 == 0;
}

// Функция возвращает string
string getGradeDescription(int score)
{
    if (score >= 90)
        return "Отлично";
    if (score >= 75)
        return "Хорошо";
    if (score >= 60)
        return "Удовлетворительно";
    return "Неудовлетворительно";
}

// Процедура для вывода проверки числа
void checkNumber(int num)
{
    cout << "Число " << num;
    if (isEven(num))
    {
        cout << " - четное" << endl;
    }
    else
    {
        cout << " - нечетное" << endl;
    }
}

int main()
{
    int x = 15, y = 8, z = 12;

    cout << "Сумма: " << add(x, y) << endl;
    cout << "Среднее: " << calculateAverage(x, y, z) << endl;
    cout << "Оценка: " << getGradeDescription(85) << endl;

    checkNumber(x);
    checkNumber(y);

    return 0;
}