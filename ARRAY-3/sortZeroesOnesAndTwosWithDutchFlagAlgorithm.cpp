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
    // METHOD- 2====> 3 POINTER ALGORITHM (DUTCH FLAG ALGORITHM)
    int n = v.size();
    int lo = 0;
    int mid = 0;
    int hi = n - 1;
    int i = 0;
    while (mid <= hi)
    {

        if (v[mid] == 2)
        {
            int temp;
            temp = v[hi];
            v[hi] = v[mid];
            v[mid] = temp;
            hi--;
        }
        else if (v[mid] == 0)
        {
            int temp;
            temp = v[lo];
            v[lo] = v[mid];
            v[mid] = temp;
            lo++;
            mid++;
        }
        else if (v[mid] == 1)
        {
            mid++;
        }
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

// SELF========

// void sortColors(vector<int> &v)
// {
//     int n = v.size();
//     vector<int> dutch;
//     vector<int> flag;
//     vector<int> algo;
//     for (int i = 0; i < n; i++)
//     {
//         if (v[i] == 0)
//         {
//             dutch.push_back(v[i]);
//         }
//         else if (v[i] == 1)
//         {
//             flag.push_back(v[i]);
//         }
//         else if (v[i] == 2)
//         {
//             algo.push_back(v[i]);
//         }
//     }
//     int index = 0;
//     for (int i = 0; i < dutch.size(); i++)
//     {
//         v[index++] = dutch[i];
//     }
//     for (int i = 0; i < flag.size(); i++)
//     {
//         v[index++] = flag[i];
//     }
//     for (int i = 0; i < algo.size(); i++)
//     {
//         v[index++] = algo[i];
//     }
//     return;
// }
// int main()
// {
//     vector<int> v = {1, 2, 2, 1, 0, 2, 1, 1, 1, 0, 0, 0, 2};
//     display(v);
//     sortColors(v);
//     display(v);
//     return 0;
// }