#include <iostream>
#include <string>
using namespace std;
class A
{
    string secret = "secret data..";
    friend class B;
    friend void revealSecret(A &obj);
};

// FRIEND CLASSS
class B
{ // becomes a friend class of A
public:
    void showSecret(A &obj)
    {
        cout << obj.secret << endl;
    }
};

// FRIEND FUNCTION
void revealSecret(A &obj){
    cout<<obj.secret<<endl;
}
int main()
{
    A a1;
    B b1;
    
    // FRIEND CLASS===
    // b1.showSecret(a1);

    // FRIEND FUNCTION===
    revealSecret(a1);
    return 0;
}