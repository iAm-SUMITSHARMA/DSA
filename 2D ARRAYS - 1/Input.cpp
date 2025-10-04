#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter row number and column number:" << endl;
    cin >> m >> n;
    int a[m][n];
    cout << "Enter a[i][j]:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Here is your 2D-Array:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}