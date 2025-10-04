#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v1(5);
    vector<int> v2(v1.size());
    // Input:  1 3 4 5 6
    cout << "Enter your vector:" << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cin >> v1[i];
    }
    cout << "Okay, we got it your vector v1 is: " << endl;
    display(v1);

    cout << "Reverse of your vector v1 is:  " << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        v2[i] = v1[v2.size() - 1 - i];
        cout << v2[i] << " ";
    }
}
