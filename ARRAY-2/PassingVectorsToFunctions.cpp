#include <iostream>
#include <vector>
using namespace std;
// PASS BY VALUE============
//  void change(vector<int> a) // NAYA VECTOR BAN GAYA - a  // initially a = 320 964 687 197
//  {
//      a[0] = 100; // now a = 100 964 687 197
//      cout << "CHANGED vector is here : " << endl;
//      for (int i = 0; i < a.size(); i++)
//      {
//          cout << a.at(i) << " ";
//      }
//      cout << endl;
//  }
// PASS BY REFERENCE============
void change(vector<int> &a) // its pointing the same vector now
{
    a[0] = 100; // now a/v = 100 964 687 197
}
int main()
{
    vector<int> v;
    v.push_back(320);
    v.push_back(964);
    v.push_back(687);
    v.push_back(197);
    cout << "Your vector is here : " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    change(v);
    cout << "CHANGED vector is here : " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;

    // NOTE : Vectors passed by value . Each time you pass, new vector created .
    // VERY VERY IMPORTANT : To do pass by reference in vector , we need to use &-ampersant character.
}