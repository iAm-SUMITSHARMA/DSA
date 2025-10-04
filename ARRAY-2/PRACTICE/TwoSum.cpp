#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(8);
    // INPUT OF THE VECTOR......
    cout << "Enter your vector:";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    // OUTPUT:  //1 3 2 4 3 4 1 6
    cout << "Okay we got it, your array is : " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    int x;
    cout << "Enter your TARGET: ";
    cin >> x;
    for (int i = 0; i < v.size() - 1; i++)
    {
        int mp = v[i];
        for (int j = i + 1; j < v.size(); j++)
            if (mp + v[j] == x)
            {
                cout << "(" << i << "," << j << ")" << endl;
            }
        // mp = v[0 + i];
    }
}