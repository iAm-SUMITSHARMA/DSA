#include <iostream>
#include <string>
using namespace std;
class Parent
{
public:
    void show()
    {
        cout << "Parent class show.." << endl;
    }
    virtual void hello()
    {
        cout << "Hello world!" << endl;
    }
};
class Child : public Parent
{
public:
    void show()
    {
        cout << "Child class show.." << endl;
    }
      void hello()
    {
        cout << "Hello sigmaaaa!" << endl;
    }
};
int main()
{
    Child c1;
    Parent *p1;
    // This is called run time polymorphism
    p1 = &c1; // Run time binding;;;;;;;;;;
    p1->hello(); // virtual function
    return 0;
}