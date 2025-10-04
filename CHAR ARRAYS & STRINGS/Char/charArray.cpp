#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    //  character array = char arr => character of array hota hai...
    // string str => object of string str
    char arr[5] = {'c', 'o', 'l', 'd', '\0'}; // character array => we can change value of this...
    // "apna college" //string literals => literals are basically like constants which we cannot change:
    // "hello world!" //string literals
    // "a" //string literals
    cout << arr << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << (int)arr[i] << "=" << arr[i] << endl;
    }
    // char work[] = "code";     // There should be an extra space for null character...
    char work[50] = {'h', 'e', 'l', 'l', 'o', '\0'};
    cout << work << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << (int)work[i] << "=" << work[i] << endl;
    }
    cout << strlen(work) << endl;
}