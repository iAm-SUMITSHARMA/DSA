#include <iostream>
using namespace std;
bool CheckForPowerOfTwo(int num)
{
    if (!((num) & (num - 1))) //((num & (num - 1)) == 0) // in this case the bit mask is (num -1);
    {
        cout << "The given bit is a power of two..." << endl;
        return true;
    }
    else
    {
        cout << "The given bit is not a power of two..." << endl;
        return false;
    }
}

int main()
{
    int num;
    cout<<"Enter your num: "<<endl;
    cin>>num;
    CheckForPowerOfTwo(num);
    // cout<<CheckForPowerOfTwo(num)<<endl;
}