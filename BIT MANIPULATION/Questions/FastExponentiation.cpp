#include <iostream>
using namespace std;
void FastExponentiation(int num, int powR)
{
    // num = base
    // powR = power of the base
    // lastBit = lastBit of the bit , either 1 or 0
    // ans = product of 1 * lastBit* num^twoP
    int ans = 1;
    while (powR > 0)
    {
        int lastBit = (powR & 1);
        // if (lastBit) // if lastBit is 1 means non-zero
        if (lastBit != 0)
        {
            ans *= lastBit * num;
        }
        num *= num; // i.e.- 3^1 3^2 3^4 3^8
        powR = powR >> 1;
    }
    cout << "ans : " << ans << endl;
}
int main()
{
    FastExponentiation(3, 5);
    FastExponentiation(2, 5);
    FastExponentiation(7, 4);
    FastExponentiation(6, 4);
    FastExponentiation(9, 4);
    return 0;
}