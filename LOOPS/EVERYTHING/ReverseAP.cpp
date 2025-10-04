#include <iostream>
using namespace std;
int main()
{
    //****100, 97, 94, 91, 88...

    // for (int i = 100; i >=0; i-=3)
    // {
    //     cout<<i<<endl;
    // }

    // -----Using Separate Variable & With Using Maths Formula=====
    //****100, 97, 94, 91, 88... 7, 4, 1  -> 34 terms

    // int a = 100;
    // for (int i = 1; i <= 34; i++)
    // {
    //     cout << a << endl;
    //     a = a - 3;
    // }

    // ALSO IT WILL WORK MAN---

    // int a = 100;
    // for (int i = 1; a > 0; i++)
    // {
    //     cout << a << endl;
    //     a = a - 3;
    // }

    // AND, ALSO IT WILL WORK TOO---

    // int a = 100;
    // for (; a > 0;)
    // {
    //     cout << a << endl;
    //     a = a - 3;
    // }

    // AND, ALSO IT WILL WORK TOO---

    // for (int a = 100; a > 0; a = a - 3)
    // {
    //     cout << a << endl;
    // }


    // AND, ALSO IT WILL WORK TOO---

    for (int i = 100; i > 0; i = i - 3)
    {
        cout << i << endl;
    }
}