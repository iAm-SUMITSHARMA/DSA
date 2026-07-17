// QUESTION: - PREDICT THE OUTPUT=>

#include <iostream>
#include <string>
using namespace std;
class Base
{
public:
    virtual void print() // virtual function
    {
        cout << "Base>>" << endl;
    }
};

class Derived : public Base
{
public:
    void print() override // redefined function
    {
        cout << "Derived...>>" << endl;
    }
};

int main()
{
    Base *b = new Derived(); // Run time binding=> So there will be Run time Polymorphism..
    b->print();
    delete b;
    return 0;
}