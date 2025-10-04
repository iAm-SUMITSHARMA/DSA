#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "eats" << endl;
    }
    void breathe()
    {
        cout << "breathes" << endl;
    }
};

class Bird : public Animal
{
public:
    void fly()
    {
        cout << "fly" << endl;
    }
};

class Fish : public Animal
{
public:
    void swim()
    {
        cout << "swim" << endl;
    }
};

class Mammal : public Animal
{
public:
    void walk()
    {
        cout << "walk" << endl;
    }
};

int main()
{
    Bird b1;
    b1.eat();
    b1.breathe();
    b1.fly();
    Fish f1;
    f1.eat();
    f1.breathe();
    f1.swim();
    Mammal m1;
    m1.eat();
    m1.breathe();
    m1.walk();
    return 0;
}