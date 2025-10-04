#include <iostream>
#include <string>
using namespace std;
void counter()
{
    static int count = 0; // static variable in a function
    count++;
    cout << "Count : " << count << endl;
}
class Example
{
public:
    // static const int x = 0; // static variable in a class
    static int x; // static variable in a class
};

int Example::x = 0;
int main()
{
    // counter();
    // counter();
    // counter();
    // counter();
    // counter();
    Example eg1;
    Example eg2;
    Example eg3;
    Example eg4;
    cout << eg1.x++ << endl; // 0
    cout << eg2.x++ << endl; // 0
    cout << eg3.x++ << endl; // 0
    cout << eg4.x++ << endl; // 0
    return 0;
}