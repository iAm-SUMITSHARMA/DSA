#include <iostream>
#include <string>
using namespace std;
class Car
{
public:
    string name;
    string color;

    Car(string nameVal, string colorVal)
    {
        this->name = nameVal;
        this->color = colorVal;
    }

    // MY OWN Custom COPY CONSTRUCTOR========
    Car(Car &original)
    {
        cout << "Copying original to new..\n";
        name = original.name;
        color = original.color;
    }
};

int main()
{
    Car c1("maruti 800", "red");
    // Car c2(c1); // automatically copy constructor call huwa..
    // cout << "car c2 name= " << c2.name << endl;
    // cout << "car c2 color= " << c2.color << endl;


    // MY OWN Custom COPY CONSTRUCTOR========
    Car c2(c1); 
    cout << "car c2 name= " << c2.name << endl;
    cout << "car c2 color= " << c2.color << endl;
}