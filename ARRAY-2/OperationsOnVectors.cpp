#include <iostream>
#include <vector>
using namespace std;
int main()
// NOTE :  Popback krne se size change hoti hai par popback krne se capacity change ni hoti ======
{
    vector<int> v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(66);
    v.push_back(13);
    v.push_back(29);
    v.push_back(120);
    v.push_back(65);
    v.push_back(12);
    v.push_back(91);
    v.push_back(101);
    // cout<<v[0]<<" "<<v[10]<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "Size is : " << v.size() << endl;
    cout << "Capacity is : " << v.capacity() << endl;

    v.pop_back();
    v.pop_back();

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "Size is : " << v.size() << endl;
    cout << "Capacity is : " << v.capacity() << endl;
}