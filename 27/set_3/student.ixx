export module student;

import <string>;
import <vector>;

export class Student
{
private:
    std::string name;
    int age;
    std::vector<int> grades;

public:
    Student(std::string name, int age)
        : name(std::move(name)), age(age) {}

    export void addGrade(int grade)
    {
        grades.push_back(grade);
    }

    export double getAverage() const
    {
        if (grades.empty())
            return 0.0;
        int sum = 0;
        for (int grade : grades)
        {
            sum += grade;
        }
        return static_cast<double>(sum) / grades.size();
    }

    export std::string getName() const
    {
        return name;
    }

    export int getAge() const
    {
        return age;
    }
};