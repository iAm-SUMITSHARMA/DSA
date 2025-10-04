#include <iostream>
#include <climits>
using namespace std;
// self============
void trap(int *arr, int n)
{
    int leftL[20000];
    int rightL[20000];
    leftL[0] = arr[0];
    rightL[n - 1] = arr[n - 1];
    // LEFTL
    for (int i = 1; i < n; i++)
    {
        leftL[i] = max(leftL[i - 1], arr[i - 1]);
    }
    // PRINTING LEFTL=======
    // cout << "LeftL:";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << leftL[i] << " ";
    // }
    // cout << endl;
    // RIGHTL
    for (int i = n - 2; i >= 0; i--)
    {
        rightL[i] = max(rightL[i + 1], arr[i + 1]);
    }
    // PRINTING RIGHTL==========
    // cout << "rightL:";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << rightL[i] << " ";
    // }
    // cout << endl;
    // MIN======
    int waterTrapped = 0;
    for (int i = 1; i < n - 1; i++)
    {
        int currWater = (min(leftL[i], rightL[i])) - arr[i];
        if (currWater > 0)
        {
            waterTrapped += currWater;
        }
    }
    // cout << endl;
    cout << "total trap water = " << waterTrapped << endl;
}
int main()
{
    int height[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(height) / sizeof(int);
    trap(height, n);
}