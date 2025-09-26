/* Работа со структурами */

#include <iostream>
#include <fstream>
#include <cstring> // для strcpy
using namespace std;

struct Student
{
    int id; char name[50]; double grade; int age;
};

int main()
{
    Student students[3] = {
        {1, "Иван Иванов", 8.5, 20}, {2, "Мария Петрова", 9.1, 19}, {3, "Петр Сидоров", 7.8, 21}};

    ofstream outFile("students.bin", ios::binary); // Запись массива структур в бинарный файл
    if (outFile.is_open())
    {
        int count = 3;
        // Записываем количество записей
        outFile.write(reinterpret_cast<char *>(&count), sizeof(count));

        // Записываем все структуры
        for (int i = 0; i < count; i++)
        {
            outFile.write(reinterpret_cast<char *>(&students[i]), sizeof(Student));
        }
        outFile.close();
        cout << "Данные студентов записаны в файл" << endl;
    }

    // Чтение массива структур из бинарного файла
    ifstream inFile("students.bin", ios::binary);
    if (inFile.is_open())
    {
        int count;
        inFile.read(reinterpret_cast<char *>(&count), sizeof(count));

        if (count > 0)
        {
            Student loadedStudents[count];

            for (int i = 0; i < count; i++)
            {
                inFile.read(reinterpret_cast<char *>(&loadedStudents[i]), sizeof(Student));
            }

            cout << "Прочитанные данные студентов:" << endl;
            for (int i = 0; i < count; i++)
            {
                cout << "ID: " << loadedStudents[i].id << endl;
                cout << "Имя: " << loadedStudents[i].name << endl;
                cout << "Оценка: " << loadedStudents[i].grade << endl;
                cout << "Возраст: " << loadedStudents[i].age << endl;
                cout << "-------------------" << endl;
            }
        }
        inFile.close();
    }

    return 0;
}