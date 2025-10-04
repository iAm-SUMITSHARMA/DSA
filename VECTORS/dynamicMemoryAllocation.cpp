#include <iostream>
using namespace std;
void funcInt()
{
    int *ptr = new int;
    *ptr = 5;
    cout << *ptr;
    delete ptr; // will free the space...
    // And have to delete that ptr file otherwise it will lead to memory leak... And make our programm performace slow...
}
int main()
{
    funcInt();
}