/* Работа с простыми типами данных */

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Данные для записи
    int number = 42;
    double pi = 3.14159;
    char letter = 'A';
    bool flag = true;

    // Запись в бинарный файл
    ofstream outFile("simple_types.bin", ios::binary);
    if (outFile.is_open())
    {
        outFile.write(reinterpret_cast<char *>(&number), sizeof(number));
        outFile.write(reinterpret_cast<char *>(&pi), sizeof(pi));
        outFile.write(reinterpret_cast<char *>(&letter), sizeof(letter));
        outFile.write(reinterpret_cast<char *>(&flag), sizeof(flag));
        outFile.close();
        cout << "Данные записаны в файл" << endl;
    }

    // Переменные для чтения
    int readNumber;
    double readPi;
    char readLetter;
    bool readFlag;

    // Чтение из бинарного файла
    ifstream inFile("simple_types.bin", ios::binary);
    if (inFile.is_open())
    {
        inFile.read(reinterpret_cast<char *>(&readNumber), sizeof(readNumber));
        inFile.read(reinterpret_cast<char *>(&readPi), sizeof(readPi));
        inFile.read(reinterpret_cast<char *>(&readLetter), sizeof(readLetter));
        inFile.read(reinterpret_cast<char *>(&readFlag), sizeof(readFlag));
        inFile.close();

        cout << "Прочитанные данные:" << endl;
        cout << "int: " << readNumber << endl;
        cout << "double: " << readPi << endl;
        cout << "char: " << readLetter << endl;
        cout << "bool: " << readFlag << endl;
    }

    return 0;
}