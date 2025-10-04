#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i)<<" ";
    }
    cout << endl;
}
void reverseP(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {

        cout << a.at(a.size() - i - 1)<<" ";
    }
    cout << endl;
}
int main()
{
    vector<int> v(5);
    cout << "Enter your vector: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    cout << "Okay we got it, your vector is : " << endl;
    display(v);
    cout << "Now, Reverse of your vector is : " << endl;
    reverseP(v);
}