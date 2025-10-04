#include <iostream>
#include <string>
using namespace std;
class Complex
{
    int real;
    int img;

public:
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    void showNum()
    {
        cout << real << " + " << img << "i" << endl;
    }

    // OPERATOR OVERLOADIGN==== For c1+ c2
    Complex operator+(Complex &c2)
    {
        int resReal = this->real + c2.real; // this->real means c1 real part;
        int resImg = this->img + c2.img;    //  this->img means c1 imginary part;
        Complex c3(resReal, resImg);
        return c3;
    }

    // OPERATOR OVERLOADING FOR c1 - c2;
    Complex operator-(Complex &c2)
    {
        int resReal = this->real - c2.real;
        int resImg = this->img - c2.img;
        Complex c4(resReal, resImg);
        return c4;
    }
};
int main()
{
    Complex c1(1, 2);
    Complex c2(3, 4);

    c1.showNum();
    c2.showNum();

    Complex c3 = c1 + c2; // operator overloading for c1 + c2
    c3.showNum();

    Complex c4 = c1 - c2; // operator overloading for c1 - c2
    c4.showNum();
    return 0;
}