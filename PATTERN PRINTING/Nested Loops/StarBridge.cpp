#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if ((i + j) >= (n + 2) && (j) <= (n + i - 2))
                cout << "  ";
            else
                cout << "* ";
        }
        cout << endl;
    }
}