#include <iostream>
using namespace std;
int sum(int x, int y){
    return x+y;
}
int main()
{
    int x = 2;
    int y = 5;
    cout<<sum(x,y);  //function call with arguments
}