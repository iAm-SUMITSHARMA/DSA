#include <iostream>
#include <string>
using namespace std;
class Teacher
{
public:
    int salary;
    string subject;
};

class Student
{
public:
    int rollNumber;
    float cgpa;
};

class TA : public Teacher, public Student
{
public:
string name;
};

int main()
{
    TA ta1;
    ta1.name = "Abhay KHurana";
    ta1.salary=56000;
    ta1.subject = "Maths";
    ta1.rollNumber=24;
    ta1.cgpa=8.89;
    cout<<ta1.name<<endl;
    cout<<ta1.salary<<endl;
    cout<<ta1.subject<<endl;
    cout<<ta1.rollNumber<<endl;
    cout<<ta1.cgpa<<endl;
    return 0;
}