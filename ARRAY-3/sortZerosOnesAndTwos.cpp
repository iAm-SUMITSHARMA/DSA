#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void sortColors(vector<int> &v)
{
    // METHOD - 1 : TWO PASS SOLUTION
    int n = v.size();
    int Z = 0; // no. of zero
    int O = 0; // no. of one
    int T = 0; // no. of two
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            Z++;
        else if (v[i] == 1)
            O++;
        else
            T++;
    }
    // FILLING
    int i = 0;
    while (i < n)
    {
        if (i < Z)
            v[i] = 0;
        else if (i < O + Z)
            v[i] = 1;
        else if (i < O + Z + T)
            v[i] = 2;

        i++;
    }

    return;
}
int main()
{
    vector<int> v = {1, 2, 2, 1, 0, 2, 1, 1, 1, 0, 0, 0, 2};
    display(v);
    sortColors(v);
    display(v);
    return 0;
}