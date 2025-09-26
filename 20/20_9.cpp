#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Создаем исходный файл
    ofstream srcFile("source.txt");
    if (srcFile.is_open())
    {
        srcFile << "Первая строка текста" << endl;
        srcFile << "Вторая строка" << endl;
        srcFile << "Третья строка информации" << endl;
        srcFile << "Последняя строка" << endl;
        srcFile.close();
    }

    // Нумерация строк
    ifstream inFile("source.txt");
    ofstream outFile("numbered.txt");

    if (inFile.is_open() && outFile.is_open())
    {
        string line;
        int lineNumber = 1;

        while (getline(inFile, line))
        {
            outFile << lineNumber << ". " << line << endl;
            lineNumber++;
        }

        inFile.close();
        outFile.close();

        cout << "Создан файл с нумерованными строками" << endl;
    }

    return 0;
}
