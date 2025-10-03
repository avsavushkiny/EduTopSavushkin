// Пример не модульной программы

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string userText;
    string filename = "user_data.txt";

    // Запрос данных у пользователя
    cout << "Введите текст для сохранения: ";
    getline(cin, userText);

    // Проверка на пустой ввод
    if (userText.empty())
    {
        cout << "Ошибка: вы не ввели текст!" << endl;
        return 1;
    }

    // Сохранение в файл
    ofstream file(filename, ios::app); // append mode

    if (!file.is_open())
    {
        cout << "Ошибка: не удалось открыть файл!" << endl;
        return 1;
    }

    file << userText << endl;
    file.close();

    cout << "Текст успешно сохранен в файл: " << filename << endl;

    // Чтение и вывод содержимого файла
    cout << "\nСодержимое файла:" << endl;
    cout << "-----------------" << endl;

    ifstream readFile(filename);
    string line;
    int lineNumber = 1;

    while (getline(readFile, line))
    {
        cout << lineNumber << ". " << line << endl;
        lineNumber++;
    }

    readFile.close();

    return 0;
}
