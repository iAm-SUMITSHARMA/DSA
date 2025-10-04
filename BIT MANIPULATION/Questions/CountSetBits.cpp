// Qn. WAF to count set bits of a number...
// set bits means 1
#include <iostream>
using namespace std;
int CountSetBits(int num)
{
    int count = 0;
    while (num > 0)
    {
        int lastDigit = (num & 1);
        count += lastDigit;
        num = num >> 1;
    }
    cout << "Total number of set bits in the bit is " << count << endl;
    return count;
}
int main()
{
    CountSetBits(10); // 1010
    CountSetBits(15); // 1111
    CountSetBits(8);  // 1000
    CountSetBits(7);  // 0111
    CountSetBits(0);  // 0000
}