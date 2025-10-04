// ## MEMORY LEAK=>

// A memory leak occurs when programmers create a memory in a heap and forget to delete it..

// Leads to reduced performace due to depletion of available memory...

#include <iostream>
using namespace std;
int *func()
{
    int *ptr = new int;
    *ptr = 1200;
    cout << "ptr points to " << *ptr << endl;
    return ptr;
}
int main()
{
    int *x = func();
    cout << *x << endl; // If I will not delete that with *delete* function then anyone can access it from here...
    return 0;
}