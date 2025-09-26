#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    // Создаем тестовый файл
    ofstream outFile("statistics.txt");
    if (outFile.is_open())
    {
        outFile << "Hello world this is a test file." << endl;
        outFile << "It contains multiple lines of text." << endl;
        outFile << "We will count characters words and lines." << endl;
        outFile.close();
    }

    // Статистика
    ifstream inFile("statistics.txt");
    int charCount = 0, wordCount = 0, lineCount = 0;
    string line;

    if (inFile.is_open())
    {
        while (getline(inFile, line))
        {
            lineCount++;
            charCount += line.length(); // +1 за символ новой строки не считаем

            // Подсчет слов в строке
            stringstream ss(line);
            string word;
            while (ss >> word)
            {
                wordCount++;
            }
        }
        inFile.close();

        cout << "Статистика файла:" << endl;
        cout << "Строк: " << lineCount << endl;
        cout << "Слов: " << wordCount << endl;
        cout << "Символов (без учета \\n): " << charCount << endl;
    }

    return 0;
}
