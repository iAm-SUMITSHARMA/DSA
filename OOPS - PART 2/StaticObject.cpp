#include <iostream>
#include <string>
using namespace std;
class Example
{
public:
    Example()
    {
        cout << "Constructor..." << endl;
    }
    ~Example()
    {
        cout << "Destructor..." << endl;
    }
};

int main()
{
    int a = 0;
    if (a==0)
    {
        //  Example eg1;
        static Example eg1; // static object.. have life span of lifetime..
    }
    cout<<"Code ending..."<<endl;
    return 0;
}