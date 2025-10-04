// if int *ptr;
// and ptr+3;
// then [3*int(4Byte)] = 12 space will skip..

// #include <iostream>
// using namespace std;
// void printArr(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << *(ptr + i) << endl;
//         // ptr = ptr + 1;
//     }
// }
// int main()
// {
//     int arr[] = {741851, 452, 374, 4753, 5785};
//     int n = sizeof(arr) / sizeof(int);
//     printArr(arr, n);
// }

// POINTER ARITHMETIC===========
// FOR ptr1 + ptr2 or ptr1 - ptr2...Only possible if,  Both pointer would be of same type...

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
//     int *ptr1 = arr;
//     int *ptr2 = ptr1 + 3; //4

//     cout << *ptr2 << endl;
//     cout << *ptr1 << endl;
//     cout << ptr2 - ptr1 << endl;
//     return 0;
// }


// COMPARISON(==,<,<=,>,>=)

#include <iostream>
using namespace std;
int main()
{
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int *ptr1 = arr;
    int *ptr2 = ptr1 + 3; //4

    cout << *ptr2 << endl;
    cout << *ptr1 << endl;
    cout << (ptr2 > ptr1) << endl; //yes : true : 1
    cout << (ptr2 < ptr1) << endl; //No : false : 0
    // Similarly for all the remaining operators......
    return 0;
}
