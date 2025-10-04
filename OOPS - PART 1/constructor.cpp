#include <iostream>
#include <string>
using namespace std;
class Car
{
    string name;
    string color;

public:
    Car() // its default...
     // THIS IS A NORMAL CONSTRUCTOR which is also called NON-PARAMATRISED CONSTRUCTOR..
    
    {
        cout << "CONSTRUCTOR WITHOUT PARAMS which is also called NON-PARAMATRISED CONSTRUCTOR..\n";
    }

    Car(string nameValue, string colorValue) // PARAMATRISED CONSTRUCTOR
    {
        cout << "CONSTRUCTOR WITH PARAMS..\n";
        this->name = nameValue; // this->prop
        // *this.name= name; // *this.prop
        // name = nameValue;
        this->color = colorValue;
        // *this.color= color; // *this.prop
        // color = colorValue;
    }
    void start()
    {
        cout << "Car has started...\n";
    }
    void stop()
    {
        cout << "Car has stopped...\n";
    }

    // Getter
    string getName()
    {
        return name;
    }
    string getColor()
    {
        return color;
    }
};

int main()
{
    Car c0; // non-paramatrised constructor...
    Car c1("maruti 800", "red"); // PARAMATRISED constructor..
    Car c2("fortuner", "red"); // PARAMATRISED constructor..
    cout << "Car name: " << c1.getName() << endl;
    cout << "Car color:" << c1.getColor() << endl;
    c1.start();
    c1.stop();
}