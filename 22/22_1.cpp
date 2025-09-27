#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Данные для записи
    int number = 42;
    bool flag = true;

    // ЗАПИСЬ в бинарный файл
    ofstream outFile("data.bin", ios::binary);
    if (outFile.is_open())
    {
        outFile.write(reinterpret_cast<char *>(&number), sizeof(number));
        outFile.write(reinterpret_cast<char *>(&flag), sizeof(flag));
        outFile.close();
    }

    // ПЕРЕМЕННЫЕ для чтения
    int readNumber;
    bool readFlag;

    // ЧТЕНИЕ из бинарного файла
    ifstream inFile("data.bin", ios::binary);
    if (inFile.is_open())
    {
        inFile.read(reinterpret_cast<char *>(&readNumber), sizeof(readNumber));
        inFile.read(reinterpret_cast<char *>(&readFlag), sizeof(readFlag));
        inFile.close();

        cout << "int: " << readNumber << endl;
        cout << "bool: " << readFlag << endl;
    }

    return 0;
}
