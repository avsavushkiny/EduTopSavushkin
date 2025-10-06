import student;
import <iostream>;

int main()
{
    Student student("Иван Иванов", 20);
    student.addGrade(85);
    student.addGrade(92);
    student.addGrade(78);

    std::cout << "Студент: " << student.getName() << std::endl;
    std::cout << "Возраст: " << student.getAge() << std::endl;
    std::cout << "Средний балл: " << student.getAverage() << std::endl;

    return 0;
}