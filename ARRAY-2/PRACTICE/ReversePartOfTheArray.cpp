#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{
    int i = 0;
    while (i < a.size())
    {
        cout << a.at(i) << " ";
        i++;
    }
    cout << endl;
}
void reverse(vector<int> &a, vector<int> &b)
{
    int i = 0;
    while (i < a.size())
    {
        b[i] = a[a.size() - i - 1];
        cout << b.at(i) << " ";
        i++;
    }
    cout << endl;
}
void reverse2(vector<int> &a)
{
    int i = 0;
    while (i < a.size())
    {
        vector<int>temp(a.size());
        temp[i] = a[a.size() - i - 1];
        cout << temp.at(i) << " ";
        i++;
    }
    cout << endl;
}

void reversePartofVector(int n, int m, vector<int> &a)
{
    while (n <= m)
    {
        int temp = a[n];
        a[n] = a[m];
        a[m] = temp;
        n++;
        m--;
    }

    return;
}

int main()
{
    vector<int> v(6);
    vector<int> rev(v.size());
    // vector<int> reversePart(v.size());
    // INPUT-
    cout << "Enter your vector:" << endl;
    int i = 0;
    while (i < v.size())
    {
        cin >> v[i];
        i++;
    }
    // OUTPUT-
    cout << "Your vector is : " << endl;
    display(v);
    cout << "Reverse of your vector is : " << endl;
    reverse(v, rev);
    cout << "Again -Reverse of your vector is : " << endl;
    reverse2(v);
    // REVERSE PART OF YOUR VECTOR =========
    int n, m;
    cout << "Enter initial and final points: " << endl;
    cin >> n >> m;
    cout << "Reverse Part of vector: " << endl;
    reversePartofVector(n, m, v);
    display(v);
}
