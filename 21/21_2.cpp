/* Работа с массивами */

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int numbers[SIZE] = {10, 20, 30, 40, 50};

    // Запись массива в бинарный файл
    ofstream outFile("array.bin", ios::binary);
    if (outFile.is_open())
    {
        // Записываем размер массива
        outFile.write(reinterpret_cast<char *>(&SIZE), sizeof(SIZE));

        // Записываем сам массив
        outFile.write(reinterpret_cast<char *>(numbers), SIZE * sizeof(int));
        outFile.close();
        cout << "Массив записан в файл" << endl;
    }

    // Чтение массива из бинарного файла
    ifstream inFile("array.bin", ios::binary);
    if (inFile.is_open())
    {
        int size;
        // Читаем размер массива
        inFile.read(reinterpret_cast<char *>(&size), sizeof(size));

        if (size > 0 && size < 1000)
        { // Защита от некорректных данных
            int loadedNumbers[size];
            // Читаем массив
            inFile.read(reinterpret_cast<char *>(loadedNumbers), size * sizeof(int));

            cout << "Прочитанный массив: ";
            for (int i = 0; i < size; i++)
            {
                cout << loadedNumbers[i] << " ";
            }
            cout << endl;
        }
        inFile.close();
    }

    return 0;
}