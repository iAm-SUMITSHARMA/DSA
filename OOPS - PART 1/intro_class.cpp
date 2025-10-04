#include <iostream>
using namespace std;
class Student
{
    // These are the properties:
    string name;
    float cgpa;

    // Methods
    void getPercentage()
    {
        cout << (cgpa * 10) << "%" << endl;
    }
};

class User
{
    int id;
    string username;
    string password;
    string bio;

    void deactivate()
    {
        cout << "deactivating account" << endl;
    }
    void editBio(int newBio)
    {
        bio = newBio;
    }
};
int main()
{
    Student s1; // This is basically an object...
    Student s2;
    cout << sizeof(s1) << endl;
    cout << sizeof(s2) << endl;
}