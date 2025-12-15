#include<iostream>

using namespace std;

class Student
{
    private:
        string name;
        int rollNumber;

    public:
        Student(string name, int rollNumber) : name(name), rollNumber(rollNumber){}

        string getName() const
        {
            return name;
        }

        int getRollNumber() const
        {
            return rollNumber;
        }
};

int main()
{

    Student students[] = 
        {
            Student("Yug", 100),
            Student("Dhruv", 101),
            Student("Jay", 102)
        };

    for (const auto &student : students)
    {
        cout << "\nStudent Name: " << student.getName() << "\nRoll Number: " 
        << student.getRollNumber() << endl;
    }

    return 0;
}
