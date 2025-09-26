#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Создаем исходный файл
    ofstream srcFile("original.txt");
    if (srcFile.is_open())
    {
        srcFile << "Это оригинальный файл." << endl;
        srcFile << "Он содержит несколько строк текста." << endl;
        srcFile << "Конец файла." << endl;
        srcFile.close();
    }

    // Копирование
    ifstream inFile("original.txt");
    ofstream outFile("copy.txt");

    if (inFile.is_open() && outFile.is_open())
    {
        string line;
        while (getline(inFile, line))
        {
            outFile << line << endl;
        }

        inFile.close();
        outFile.close();

        cout << "Файл успешно скопирован!" << endl;
    }

    return 0;
}
