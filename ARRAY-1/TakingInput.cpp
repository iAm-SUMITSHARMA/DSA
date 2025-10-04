#include <iostream>
using namespace std;
int main()
{
    int arr[7];
    // TAKING INPUT BY USING FOR LOOP --------------
    for (int i = 0; i <= 6; i++)
    {
        cin >> arr[i];
    }

    // OUTPUT --------------
    for (int i = 0; i <= 6; i++)
    {
        cout << arr[i] << " ";
    }
}
