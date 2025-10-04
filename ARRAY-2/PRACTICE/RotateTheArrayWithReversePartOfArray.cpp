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
void rotate(vector<int> &a)
{
    vector<int> tempo(a.size());
    for (int i = 0; i < a.size(); i++)
    {
        tempo[i] = a[a.size() - i - 1];
    }
    display(tempo);
}

void halfReverse(int k, vector<int> &a)
{
    int n = (a.size() - k);
    vector<int> temp(a.size());
    for (int i = 0; i < a.size(); i++)
    {
        for (int i = 0; i < n; i++)
        {
            temp[i] = a[n - i - 1];
        }
        for (int i = n; i < a.size(); i++)
        {
            temp[i] = a[a.size() + n - i - 1];
        }
    }
    display(temp);
    cout << "Your vector after rotation is:" << endl;
    rotate(temp);
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
    int k;
    cout << "Enter the number of steps:" << endl;
    cin >> k;
    cout << "HalfReverse:" << endl;
    halfReverse(k, v);
}