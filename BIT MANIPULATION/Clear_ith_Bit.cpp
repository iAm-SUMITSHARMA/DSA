#include <iostream>
using namespace std;
int ClearIthBit(int num, int i)
{
    int bitmask = ~(1 << i); // bitmask is a NOT of (1 << i)
    // cout<<bitmask<<endl;  // if you are reading this , then check this...
    return (num & bitmask);
}
int main()
{
    // ClearIthBit(6, 1);
    cout << ClearIthBit(6, 1) << endl;
}