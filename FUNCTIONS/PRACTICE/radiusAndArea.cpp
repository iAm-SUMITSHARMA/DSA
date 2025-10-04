#include <iostream>
using namespace std;
float area(int x)
{
    float pi = 3.143;
    cout << "Area of the circle of the radius " << x << " is : " << pi * x * x;
}
int main()
{
    float r;
    cout << "Enter radius of the circle babe : ";
    cin >> r;
    area(r);
}