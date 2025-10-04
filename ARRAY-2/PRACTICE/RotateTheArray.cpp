#include <iostream>
#include <vector>
using namespace std;
void input(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }
}
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void reversePart(int i, int j, vector<int> &a)
{
    while (i <= j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    return;
}
int main()
{
    vector<int> v(7);
    cout << "Enter the vector:" << endl;
    // INPUT==
    input(v);
    cout << "Your vector is : " << endl;
    display(v);
    // ROTATE==
    int n = v.size();
    int k;
    cout << "Enter the number of steps:" << endl;
    cin >> k;
    if (k > n)
    {
        k = k % n;
    }

    reversePart(0, n - k - 1, v); // REVERSE THE FIRST HALF FROM STARTING
    reversePart(n - k, n - 1, v); // REVERSE THE SECOND HALF - THE END WLA
    reversePart(0, n - 1, v);     // REVERSE THE WHOLE -
    cout << "Vector after rotation is :" << endl;
    display(v);
}