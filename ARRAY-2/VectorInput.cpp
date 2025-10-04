#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // WITH SIZE==========
    // vector<int>v(5);
    // for(int i = 0 ; i<5 ; i++){
    //     cin>>v[i];
    // }
    // for (int i =0 ; i < 5 ; i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // WITHOUT DECLARING THE SIZE======
    // BUT WITH USING AN EXTRA VARIABLE----------
    vector<int> v;
    int n; // n  IS OUR EXTRA VARIABLE====
    cout << "Enter your n: ";
    cin >> n;
    cout << "Enter your elements now : " << endl;
    for (int i = 0; i < n; i++)
    {
        int x; // x  IS OUR EXTRA VARIABLE====
        cin >> x;
        v.push_back(x);
    }
    cout << "Your array is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}
