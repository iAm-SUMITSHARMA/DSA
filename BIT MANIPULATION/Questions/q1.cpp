// Question 1 : Write a Function to clear the range of bits from i to j in a given number. (i
// & j are counted backwards from the right end of the number)
// Examples :
// Input : num = 15, i = 1, j = 3 Output
// : 1
// Explanation :
// 15 in binary form is => 00001111 [i=1st & j=3rd bit underlined]
// After bits are cleared, number will become 00000001
// Input : num = 31, i = 1, j = 3 Output
// : 17
// Note - Think about what type of bit mask is needed. It can also be a combination of 2
// numbers.

#include <iostream>
using namespace std;
void ClearRangeOfBitsFromItoJ(int num, int i, int j)
{
    int bitMask = ((1<<i)-1) | ((~0)<<(j+1));
    num = num & bitMask;
    cout<<num<<endl;
}
int main()
{
    ClearRangeOfBitsFromItoJ(32, 1, 3);
    // ClearRangeOfBitsFromItoJ(2, 1, 2);
    ClearRangeOfBitsFromItoJ(12, 2, 3);
    return 0;
}