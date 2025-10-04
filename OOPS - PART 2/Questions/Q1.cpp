// Question 1 : Create a class to store Complex numbers. Using operator overloading,
// create the logic to subtract one complex number from another.
// Note - In Complex numbers, the real part of 1st gets subtracted from the real part of
// 2nd number. Same goes for the imaginary part.
// #include <iostream>
// #include <string>
// using namespace std;
// class Complex
// {
//     int real;
//     int img;

// public:
//     Complex(int r, int i)
//     {
//         real = r;
//         img = i;
//     }

//     void showNum()
//     {
//         cout << real << "+" << img << "i" << endl;
//     }
//     Complex operator-(Complex &obj)
//     {
//         int resReal = this->real - obj.real;
//         int resImg = this->img - obj.img;
//         Complex c3(resReal, resImg);
//         return c3;
//     }
// };
// int main()
// {
//     Complex c1(1, 2);
//     Complex c2(3, 4);
//     Complex c3 = c2 - c1;
//     c3.showNum();
// }

// Question 1 : Create a class to store Complex numbers. Using operator overloading,
// create the logic to subtract one complex number from another.
// Note - In Complex numbers, the real part of 1st gets subtracted from the real part of
// 2nd number. Same goes for the imaginary part.
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
        this->real = r;
        this->img = i;
    }
    void showNum()
    {
        cout << real << " + " << img << "i" << endl;
    }
    Complex operator-(Complex &obj)
    {
        int resReal = this->real - obj.real;
        int resImg = this->img - obj.img;
        Complex C3(resReal, resImg);
        return C3;
    }
};
int main()
{
    Complex c1(1, 2);
    Complex c2(3, 4);
    Complex c3 = c2 - c1;
    c3.showNum();
}