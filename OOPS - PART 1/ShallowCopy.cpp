#include <iostream>
#include <string>
using namespace std;
class Car
{
public:
    string name;
    string color;
    int *mileage;

    Car(string nameVal, string colorVal)
    {
        this->name = nameVal;   // static allocation
        this->color = colorVal; // static allocation
        mileage = new int;      // Dynamic allocation
        *mileage = 12;
    }

    // MY OWN Custom COPY CONSTRUCTOR========
    // Car(Car &original)
    // {
    //     cout << "Copying original to new..\n";
    //     name = original.name;
    //     color = original.color;
    //     mileage = original.mileage;
    // }
};

int main()
{
    Car c1("maruti 800", "red");
    Car c2(c1);
    cout << c2.name << endl;
    cout << c2.color << endl;
    cout << *c2.mileage << endl;
    cout << "punjabi" << endl;

    cout << c1.name << endl;
    cout << c1.color << endl;
    cout << *c1.mileage << endl;
    cout << "Twada butti daa sount " << endl;

    cout << "Changing c2 ki mileage: " << endl;
    *c2.mileage = 10;
    cout << *c2.mileage << endl; // 10
    cout << "punjabi" << endl;
    cout << *c1.mileage << endl; // 10
    cout << "Twada butti daa sount " << endl;
}