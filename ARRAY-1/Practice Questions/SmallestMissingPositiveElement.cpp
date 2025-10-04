#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {1, 3, 5, 564, 78, 897};
    // PRINTING ARRAY====
    cout << "Your array is : " << endl;
    for (int i = 0; i <= 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // CHECK MARK==
    int n;
    bool flag = false;
    for (int i = 0; i <= 5; i++)
    {
        if (arr[i] != (i + 1))
        {
            flag = true;
            n = (i + 1);
            break;
        }
    }
    if (flag == true)
        cout << n << " is missing" << endl;
}