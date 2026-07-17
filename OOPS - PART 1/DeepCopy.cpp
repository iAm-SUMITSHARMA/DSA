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

    // DEEP COPY
    // MY OWN Custom COPY CONSTRUCTOR FOR DEEP COPY========
    Car(Car &original)
    {
        cout << "Copying original to new..\n";
        name = original.name;
        color = original.color;
        mileage = new int;  // allocate new memory
        *mileage = *original.mileage; // copy value , not pointer
    }
};
// - Output: "Copying original to new.." (from your copy constructor).
// - Now:
// - c1.mileage → heap memory with value 12.
// - c2.mileage → separate heap memory with value 12.

// - Because of deep copy, c2.mileage and c1.mileage are independent.
// - Changing c2.mileage does not affect c1.mileage.
// - This is the key difference from shallow copy (where both would have changed).


int main()
{
    Car c1("maruti 800", "red"); // constructor called
    Car c2(c1); // deep copy constructor called
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
    cout << *c1.mileage << endl; // 12
    cout << "Twada butti daa sountttt " << endl;
    return 0;
}