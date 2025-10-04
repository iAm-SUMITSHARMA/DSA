#include <iostream>
using namespace std;
int main()
{
    // Qn- Display this AP : 4,7,10,13,16.. upto ‘n’ terms.
    int n;
    cout << "Enter n : ";
    cin >> n;
    for (int i = 4; i <= 3*n + 1; i += 3)
    {
    cout << i << " ";
    }
}