#include <iostream>
#include <string>
using namespace std;
// abstract class
class Shape
{
public:
    virtual void draw() = 0; // pure virtual function or abstract function
};
class Circle : public Shape
{
public:
    void draw()
    {
        cout << "draw circle.." << endl;
    }
};

class Square : public Shape
{
public:
    void draw()
    {
        cout << "draw square.." << endl;
    }
};

int main()
{
    Circle c1;
    c1.draw();
    Square s1;
    s1.draw();

    return 0;
}