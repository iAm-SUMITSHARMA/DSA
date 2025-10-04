#include <iostream>
#include <vector>
using namespace std;
// occurence mtlb index===========
int main()
{
    vector<int> v(5);
    int x;
    cout << "Enter your x : ";
    cin >> x;
    int lastOccurrence;
    cout << "Enter your elements of the vector : " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v.at(i);
    }
    cout << "Okay we got it, your vector is here : " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    cout << "Finding your " << x << " in the vector now..... " << endl;
    // CHECKMARK===
    bool flag = false;
    for (int i = v.size(); i >= 0; i--)
    {
        if (v.at(i) == x)
        {
            flag = true;
            lastOccurrence = i;
        }
        // else
        // {
        //     cout << "No there is no x in the vector.";
        // }
    }
    if (flag == true)
    {
        cout << "Hoooray , your element x is in the vector. Here is the index/ lasst occurrence of the x in the vector : " << endl;
        cout << lastOccurrence;
    }
    else
    {
        cout << "No , there is no x in the vector.";
    }
}