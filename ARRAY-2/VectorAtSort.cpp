#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(320);
    v.push_back(964);
    v.push_back(687);
    v.push_back(197);
    cout << v[0] << " ";
    cout << v[1] << " ";
    cout << v[2] << " ";
    cout << v[3] << " ";
    cout << endl;
    cout << "By using at : " << endl;
    // v.at(0) = 6778921;
    // cout << v.at(0) << " ";
    // cout << v.at(1) << " ";
    // cout << v.at(2) << " ";
    // cout << v.at(3) << " ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    // SORT
    sort(v.begin(), v.end());
    cout << "Your array in ascending order is here : " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}