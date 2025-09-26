#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Создаем первый файл
    ofstream file1("file1.txt");
    if (file1.is_open())
    {
        file1 << "Содержимое первого файла:" << endl;
        file1 << "Строка 1" << endl;
        file1 << "Строка 2" << endl;
        file1.close();
    }

    // Создаем второй файл
    ofstream file2("file2.txt");
    if (file2.is_open())
    {
        file2 << "Содержимое второго файла:" << endl;
        file2 << "Строка A" << endl;
        file2 << "Строка B" << endl;
        file2.close();
    }

    // Объединение
    ofstream result("result.txt");
    ifstream in1("file1.txt");
    ifstream in2("file2.txt");

    if (result.is_open() && in1.is_open() && in2.is_open())
    {
        string line;

        // Копируем первый файл
        while (getline(in1, line))
        {
            result << line << endl;
        }

        // Добавляем разделитель
        result << "--- Объединение ---" << endl;

        // Копируем второй файл
        while (getline(in2, line))
        {
            result << line << endl;
        }

        in1.close();
        in2.close();
        result.close();

        cout << "Файлы объединены в result.txt" << endl;
    }

    return 0;
}
