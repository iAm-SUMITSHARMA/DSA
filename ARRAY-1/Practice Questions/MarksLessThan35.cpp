#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter total no. of students: ";
    cin >> n;
    int marks[n];
    // INPUT FROM USER:
    cout << "Enter marks of every student: " << endl;

    for (int i = 0; i <= n - 1; i++)
    {
        cin >> marks[i];
    }
    // OUTPUT:
    for (int i = 0; i <= n - 1; i++)
    {
        if (marks[i] >= 35)
        {
            cout << marks[i] << " ";
        }
        else
            cout << i << " ";
    }
}