#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m, n, p, q;
    cout << "Enter rows and colums of 1st matrix: " << endl;
    cin >> m >> n;
    cout << "Enter rows and colums of 2nd matrix: " << endl;
    cin >> p >> q;
    if (n == p)
    {

        int a[m][n];
        int b[p][q];
        // first matrix
        cout << "Enter a[m][n]: " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        // second matrix
        cout << "Enter b[p][q]: " << endl;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> b[i][j];
            }
        }
        cout << "Here is your a[m][n]: " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        cout << "Here is your b[p][q]: " << endl;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
        cout << "Now the multiplication of the two matrix is : " << endl;
        // resultant matrix
        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                int sum = 0;
                for (int k = 0; k < p; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                res[i][j] = sum;
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    { // n!= p
        cout << "The matrix cannot be multiplied." << endl;
    }
}
