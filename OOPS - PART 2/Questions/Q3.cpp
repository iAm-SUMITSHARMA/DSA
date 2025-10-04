// Question 3 : Create a base class Person with attributes name and age.
// Derive a class Student from Person and add an additional attribute studentID.
// Implement a method displayStudentInfo( ) in the Student class to display all details.
// In main function Student class object will be created in this format:
// Student student("Alice", 20, "S12345");

// Note - When we initialize an object of a derived class, the base class part has to be
// constructed first.
// If we don't initialize it ourselves in the derived class' constructor by calling one of its
// constructors, the compiler will attempt to use the default constructor of the base
// class.
// To invoke the parent’s parameterized constructor in Child’s constructor, syntax is :
// Child(int x) : Parent(x)
// { …… }

// #include <iostream>
// #include <string>
// using namespace std;
// class Person
// {
// public:
//     string name;
//     int age;
// };
// class Student : public Person
// {
// public:
//     string studentId;
//     Student(string nam, int ag, string std)
//     {
//         this->name = nam;
//         this->age = ag;
//         this->studentId = std;
//     }
//     void displayStudentInfo()
//     {
//         cout << "Student : " << name << endl;
//         cout << "Student's age : " << age << endl;
//         cout << "Student's studentId : " << studentId << endl;
//     }
// };
// int main()
// {
//     Student s1("Alice", 23, "S2343");
//     s1.displayStudentInfo();
//     return 0;
// }

// Question 3 : Create a base class Person with attributes name and age.
// Derive a class Student from Person and add an additional attribute studentID.
// Implement a method displayStudentInfo( ) in the Student class to display all details.
// In main function Student class object will be created in this format:
// Student student("Alice", 20, "S12345");

// Note - When we initialize an object of a derived class, the base class part has to be
// constructed first.
// If we don't initialize it ourselves in the derived class' constructor by calling one of its
// constructors, the compiler will attempt to use the default constructor of the base
// class.
// To invoke the parent’s parameterized constructor in Child’s constructor, syntax is :
// Child(int x) : Parent(x)
// { …… }

#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    string name;
    int age;
};
class Student : public Person
{
public:
    string studentId;
    Student(string n, int a, string id)
    {
        this->name = n;
        this->age = a;
        this->studentId = id;
    }
    void displayStudentInfo()
    {
        cout << "student name : " << name << endl;
        cout << "student age : " << age << endl;
        cout << "student id : " << studentId << endl;
    }
};
int main()
{
    Student s("Alice", 20, "s23434");
    s.displayStudentInfo();
}