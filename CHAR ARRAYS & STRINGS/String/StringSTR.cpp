#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    //  character array = char arr => character of array hota hai...
    // string str => object of string str
    // char arr=> we cannot change value of this..
    // string str => we can change value of this...
    char arr[6] = "hello";
    string str = "hello";
    cout << "string=" << str << endl;
    cout << "array=" << arr << endl;
    str = "yellow"; // changing string
    // arr[6] = "yello"; // changing array not possible
    cout << "string=" << str << endl;
    // cout<<"array="<<arr<<endl;
}