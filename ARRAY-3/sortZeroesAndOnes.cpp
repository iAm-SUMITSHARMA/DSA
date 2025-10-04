#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
// void sort01(vector<int> &a)
// {
//     // Total time taken --> 2n
//     int n = a.size();
//     int x = 0; // No. of ones
//     int y = 0; // NO. of zeroes
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == 0)
//             y++;
//         else
//             x++;
//     }
//     // FILLING ELEMENTS
//     for (int i = 0; i < n; i++)
//     {
//         if (i < y)
//             a[i] = 0;
//         else
//             a[i] = 1;
//     }
//     return;
// }
void sort0And1(int i, int j, vector<int> &v)
{
    while (i < j)
    {
        if (v[j] == 1)
            j--;
        else if (v[i] == 0)
            i++;
        else if (v[i] == 1 && v[j] == 0)
        {
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;
        }
    }
    return;
}
int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // KAAM
    // sort01(v); // METHOD - 1
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // cout << endl;

    // METHOD-2 --> TWO POINTERS (when you can't use twice a loop)
    int i = 0;
    int j = v.size() - 1;
    sort0And1(i, j, v);
    display(v);

    return 0;
}
