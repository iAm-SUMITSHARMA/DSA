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
void mergeTwo(vector<int> &a, vector<int> &b, vector<int> &c)
{
    int k = 0;
    int j = 0;
    // a[k] = a[0];
    // b[j] = b[0];
    int i = 0;
    for (; k <= (a.size() - 1) && j <= (b.size() - 1); i++)
    {
        if ((a[k] <= b[j]))
        {
            c[i] = a[k];
            // a[k++];
            k++;
        }
        else
        {
            c[i] = b[j];
            // b[j++];
            j++;
        }
    }

    // FOR REMAINING ELEMENTS==========
    if (k == a.size())
    {
        while (j <= (b.size() - 1))
        {
            c[i] = b[j];
            i++;
            j++;
        }
    }
    if (j == b.size())
    {
        while (k <= (a.size() - 1))
        {
            c[i] = a[k];
            i++;
            k++;
        }
    }
    return;
}
int main()
{
    vector<int> a = {1, 4, 5, 8};
    vector<int> b = {2, 3, 6, 7, 10, 14, 90, 809};
    vector<int> c((a.size()) + (b.size()));
    mergeTwo(a, b, c);
    display(c);
}