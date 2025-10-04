#include <iostream>
#include <string>
using namespace std;
class Student
{
    string name;
    float cgpa;

public:
    void getPercentage()
    {
        cout << (cgpa * 10) << "%" << endl;
    }

    // Setters - Used to set the value of private...
    void setName(string nameVal)
    {
        name = nameVal;
    }

    void setCgpa(float cgpaVal)
    {
        cgpa = cgpaVal;
    }

    // Getters - Used to get the value of private...
    string getName()
    {
        return name;
    }

    float getCgpa()
    {
        return cgpa;
    }
};

int main()
{
    Student s1;
    // s1.name = "Sumit Sharma";
    // s1.setName("Sumit Sharma");

    // HERE WE CALL THE SETTERS 
    s1.setName("Sumit");
    s1.setCgpa(8.67);

    // AND HERE WE CALL THE GETTERS
    cout << s1.getName() << endl;
    cout << s1.getCgpa() << endl;
    
    s1.getPercentage();
    return 0;
}