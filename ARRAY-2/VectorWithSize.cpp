#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(5); // DECLARATION WITH INITIALISATION =====
    // OR
    // vector<int> v(5, 7); // initial size = 5 and each element have value 7...
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << v[0] << " ";
    cout << v[1] << " ";
    cout << v[2] << " ";
    cout << v[3] << " ";
    cout << v[4] << " ";
}