#include <iostream>
using namespace std;
int main()
{
    int a[2][4];
    // INPUT
    cout << "Enter Roll number and marks:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }
    // OUTPUT
    cout << "Here is your matrix:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}