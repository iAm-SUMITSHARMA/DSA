#include <iostream>
using namespace std;
int main()
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
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            sum += a[i][j];
        }
    }
    cout << "Here is the sum:" << sum << endl;
}
