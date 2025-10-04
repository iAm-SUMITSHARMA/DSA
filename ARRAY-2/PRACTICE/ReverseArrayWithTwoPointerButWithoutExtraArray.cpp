#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v(5);
    cout << "Enter your vector: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v.at(i);
    }
    cout << "Okay, we got it your vector is :" << endl;
    display(v);
    // reverse============
    // int k = 0;
    // int l = v.size() - 1;

    // with while loop==========

    // while (k <= l)
    // {
    //     // swap v[k] and v[l]
    //     int temp = v[k];
    //     v[k] = v[l];
    //     v[l] = temp;
    //     k++;
    //     l--;
    // }

    // BY USING FOR LOOP=======

    // for (; k <= l; k++)
    // {
    //     // swap v[k] and v[l]
    //     int temp = v[k];
    //     v[k] = v[l];
    //     v[l] = temp;
    //     l--;
    // }

    // BY USING FOR LOOP and WITH DOUBLE INITIALISATION AND DOUBLE INCREMENT/DECREMENT=======

    for (int i = 0, j = v.size() - 1; i <= j; i++, j--)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }

    cout << "Reverse of your vector is : " << endl;
    display(v);
}