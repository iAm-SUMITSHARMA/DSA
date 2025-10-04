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

class Fish : public Animal
{
public:
    int fins;
    void swim()
    {
        eat();
        cout << "swims" << endl;
    }
};

int main()
{
    // Animal elephant;
    Fish laptide;
    laptide.fins = 3;
    cout<<laptide.fins<<endl;
    laptide.swim();
    laptide.color="blue";
    cout<<laptide.color<<endl;
    laptide.eat();
    laptide.breathe();
    return 0;
}