#include <iostream>
using namespace std;
int main()
// Rotate the matrix by 90 degree by clockwise
{
    int m, n;
    cout << "Enter row and columns:" << endl;
    cin >> m >> n;
    int a[m][n];
    cout << "Enter your array:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << " your array:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    // SELF====>
    //  ROTATE BY 90 DEGREE:
    cout << "ROTATE BY 90 DEGREE:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}

