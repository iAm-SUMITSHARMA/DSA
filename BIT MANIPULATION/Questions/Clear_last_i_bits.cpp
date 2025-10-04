// Qn. WAF to clear last i bits of a number...
// num = 15, i = 2 => after clearing 1100 which is equal to 12
#include <iostream>
using namespace std;
void ClearLastIBits(int num, int i)
{
    num = num & ((~0) << i);
    cout << num << endl;
}
int main()
{
    ClearLastIBits(15, 2);
    ClearLastIBits(15, 3);
    // cout << ClearLastIBits(7, 2) << endl;
    // cout << ClearLastIBits(15, 3) << endl;
}