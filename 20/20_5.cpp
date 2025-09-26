#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Создаем файл
    ofstream outFile("story.txt");

    if (outFile.is_open())
    {
        outFile << "Яблоко упало на голову Ньютону." << endl;
        outFile << "Это привело к открытию закона тяготения." << endl;
        outFile.close();
    }

    // Поиск слова
    string searchWord = "Ньютону";
    bool found = false;

    ifstream inFile("story.txt");
    string word;

    if (inFile.is_open())
    {
        while (inFile >> word)
        {
            if (word == searchWord)
            {
                found = true;
                break;
            }
        }

        inFile.close();

        if (found)
        {
            cout << "Слово '" << searchWord << "' найдено в файле!" << endl;
        }
        else
        {
            cout << "Слово '" << searchWord << "' не найдено." << endl;
        }
    }

    return 0;
}
