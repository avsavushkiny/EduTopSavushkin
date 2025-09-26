#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Создаем файл с числами
    ofstream allFile("numbers.txt");
    if (allFile.is_open())
    {
        for (int i = 1; i <= 20; i++)
        {
            allFile << i << endl;
        }
        allFile.close();
    }

    // Фильтрация четных чисел
    ifstream inFile("numbers.txt");
    ofstream evenFile("even_numbers.txt");

    if (inFile.is_open() && evenFile.is_open())
    {
        int number;
        while (inFile >> number)
        {
            if (number % 2 == 0)
            { // Проверка на четность
                evenFile << number << endl;
            }
        }

        inFile.close();
        evenFile.close();

        cout << "Четные числа записаны в even_numbers.txt" << endl;

        // Вывод результата
        ifstream resultFile("even_numbers.txt");
        if (resultFile.is_open())
        {
            cout << "Содержимое файла с четными числами:" << endl;
            while (resultFile >> number)
            {
                cout << number << " ";
            }
            cout << endl;
            resultFile.close();
        }
    }

    return 0;
}
