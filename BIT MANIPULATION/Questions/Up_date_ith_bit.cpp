// Question: WAF to update the ith bit in a number according to given value (0 or 1).
// num = 7, i = 2, val = 0
// num = 7 , i = 3, val = 1

#include <iostream>
using namespace std;
// SOLVING WITH TWO FUNCTIONS SET ITH BIT AND CLEAR ITH BIT...

// int setIthBit(int num, int i)
// {
//     int bitmask = 1 << i;
//     cout << ((num) | (bitmask)) << endl;
// }
// int clearIthBit(int num, int i)
// {
//     int bitmask = ~(1 << i);
//     cout << ((num) & (bitmask)) << endl;
// }
// int UpdateIthBit(int num, int i, int val)
// {
//     if (val == 0)
//     {
//         clearIthBit(num, i);
//     }
//     else
//     {
//         setIthBit(num, i);
//     }
// }

//  SOLVING WITH ONE SINGLE FUNCTION UPDATE ITH BIT

void UpdateIthBit(int num, int i, int val)
{
    // clear the ith bit make it 0
    num = (num) & (~(1 << i));
    num = (num | (val<<i));
    cout << num << endl;
}

int main()
{
    UpdateIthBit(7, 2, 0);
    UpdateIthBit(7, 3, 1);
    // cout << UpdateIthBit(7, 2, 0) << endl;
    // cout << UpdateIthBit(7, 3, 1) << endl;
}