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

    // DESTRUCTOR========
    ~Car(){
        cout<<"deleting object...\n";
        if (mileage != NULL)
        {
            delete mileage;
            mileage = NULL;
        }
        
    }
};

int main()
{
    Car c1("maruti 800", "red");

    cout << c1.name << endl;
    cout << c1.color << endl;
    cout << *c1.mileage << endl;
    cout << "Twada butti daa sount " << endl;

    return 0;
}