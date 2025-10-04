#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m, n, p, q;
    cout << "Enter rows & columns of first matrix: " << endl;
    cin >> m >> n;
    cout << "Enter rows & columns of second matrix: " << endl;
    cin >> p >> q;
    if (n != p)
    {
        cout << "Matrix can not be multiplied...";
    }
    else // n==p
    {
        int a[m][n];
        int b[p][q];
        cout << "Enter elements of first matrix: " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        cout << "Enter elements of second matrix: " << endl;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> b[i][j];
            }
        }
        cout << "Here is your first matrix: " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        cout << "Here is your second matrix: " << endl;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
        // Resultant Matrix=========
        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                int sum = 0;
                for (int k = 0; k < n; k++)
                {
                    //    res[i][j] += a[i][k] * b [k] [j];
                    sum += a[i][k] * b[k][j];
                }

                res[i][j] = sum;
            }
        }
        cout << "Resultant Matrix : " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
}