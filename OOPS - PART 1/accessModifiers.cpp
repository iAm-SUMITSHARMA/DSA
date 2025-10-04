#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    float cgpa;

    void getPercentage()
    {
        cout << (cgpa * 10) << "%" << endl;
    }
};

int main()
{
    Student s1;
    // s1.name = "Sumit Sharma";
    s1.name = "Sumit";
    s1.cgpa = 8.5;
    cout << s1.name << endl;
    cout << s1.cgpa << endl;
    s1.getPercentage();
    return 0;
}