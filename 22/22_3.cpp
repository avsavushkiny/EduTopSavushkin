#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Student
{
    int id; char name[50]; double grade;
};

int main()
{
    Student student;
    student.id = 1;
    strcpy(student.name, "Иван Иванов");
    student.grade = 8.5;

    // ЗАПИСЬ структуры в бинарный файл
    ofstream outFile("student.bin", ios::binary);
    if (outFile.is_open())
    {
        outFile.write(reinterpret_cast<char *>(&student), sizeof(Student));
        outFile.close();
        cout << "Структура записана в файл" << endl;
    }

    // ЧТЕНИЕ структуры из бинарного файла
    Student readStudent;
    ifstream inFile("student.bin", ios::binary);
    if (inFile.is_open())
    {
        inFile.read(reinterpret_cast<char *>(&readStudent), sizeof(Student));
        inFile.close();

        cout << "Прочитанная структура:" << endl;
        cout << "ID: " << readStudent.id << endl;
        cout << "Имя: " << readStudent.name << endl;
        cout << "Оценка: " << readStudent.grade << endl;
    }

    return 0;
}
