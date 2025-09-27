#include <iostream>
#include <fstream>
#include <filesystem>
using namespace std;

int main()
{
    int data[100];
    for (int i = 0; i < 100; i++)
    {
        data[i] = i * 10;
    }

    // Запись в текстовый файл
    ofstream textFile("text_data.txt");
    for (int i = 0; i < 100; i++)
    {
        textFile << data[i] << " ";
    }
    textFile.close();

    // Запись в бинарный файл
    ofstream binFile("binary_data.bin", ios::binary);
    binFile.write(reinterpret_cast<char *>(data), sizeof(data));
    binFile.close();

    // Сравнение размеров
    cout << "Размер текстового файла: " << filesystem::file_size("text_data.txt") << " байт" << endl;
    cout << "Размер бинарного файла: " << filesystem::file_size("binary_data.bin") << " байт" << endl;

    return 0;
}
