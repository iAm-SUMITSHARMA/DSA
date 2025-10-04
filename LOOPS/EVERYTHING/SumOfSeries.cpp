#include <iostream>
using namespace std;
int main()
{
    // 1 - 2 + 3 - 4 + 5 - 6... upto 'n'.
    int n;
    cout << "Enter n : ";
    cin >> n;
    int z = n; // Just to store n . So that I can use it in the last.
    int sum = 0;

    // By me---

    //  int odd = 0;
    //  int even = 0;
    //  for (int i = 1; i <= n; i++)
    //  {
    //      if (i % 2 == 0)
    //          even = even + i;
    //      else
    //          odd = odd + i;

    //     sum = odd - even;
    // }

    // By Raghav sir---

    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 == 0)
    //         sum -= i;
    //     else
    //         sum += i;
    // }

    // By Raghav Sir's Formula & Logic----
    if (n % 2 == 0)
        sum = -n / 2;
    else
        sum = (-n / 2) + n;

    cout << "Sum of the above series upto " << z << " terms is : " << sum;
}