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
void sortNandP(int i, int j, vector<int> &v)
{
    while (i < j)
    {
        if (v[j] > 0)
        {
            j--;
        }
        else if (v[i] < 0)
        {
            i++;
        }
        else if (v[i] > 0 && v[j] < 0)
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }
    return;
}
int main()
{
    vector<int> v = {1, 5, -2, 55, -503, -32, 98};
    display(v);
    int i = 0;
    int j = v.size() - 1;
    sortNandP(i, j, v);
    display(v);
}