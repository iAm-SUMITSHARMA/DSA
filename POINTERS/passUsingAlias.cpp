#include <iostream>
using namespace std;
void swap(int &x, int &y) // PASS BY REFERENCE
{
    int temp = x;
    x = y;
    y = temp;
    return;
}
int main()
{
    int a = 8, b = 45;
    // cin >> a >> b;
    swap(a, b);
    cout << a << " " << b;
}

// NOTE: ISKA EXPLANATION NA HI SAMAJHO TO BEHTAR HOGA--- RAGHAV SIR TOLD THIS===