#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
    string color;
    void eat()
    {
        cout << "eats" << endl;
    }
    void breathe()
    {
        cout << "breathes" << endl;
    }
};

class Mammal : public Animal
{
public:
    string bloodType;
    Mammal() // Constructor
    {
        bloodType = "warm";
    }
    
};

class Dog : public Mammal
{
public:
    void tailSwing()
    {
        cout << "tailswing" << endl;
    }
};

int main()
{
    Dog rummy;
    rummy.eat();
    rummy.breathe();
    rummy.tailSwing();
    cout<<rummy.bloodType<<endl;
    return 0;
}