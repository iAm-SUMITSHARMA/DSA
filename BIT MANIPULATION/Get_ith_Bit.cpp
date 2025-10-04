#include <iostream>
using namespace std;
void GETithBIT(int num, int i)
{
    // by self
    // First I have done right shift our num by ith term and then I simply do (jam & 1) to check if its 1 or 0
    int jam = num >> i;
    // cout << jam << endl;
    // if ((jam & 1)==0)
    if (!(jam & 1))
    {
        cout << "ith bit is " << 0 << endl;
    }
    else
    {
        cout << "ith bit is " << 1 << endl;
    }

    // by sharaddha khapra
    // She have done left shift our bitmask by ith term and then simply do this (num & bitmask) to check if its 1 or 0
    int bitmask = 1 << i;
    // if ((num & bitmask == 0))
    if (!(num & bitmask))
    {
        cout << "ith bit is " << 0 << endl;
    }
    else
        cout << "ith bit is " << 1 << endl;
}
int main()
{
    GETithBIT(6, 2);
    // GETithBIT(16,2);
}
