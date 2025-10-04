// Question 2 : Create a class BankAccount with private attributes accountNumber and
// balance. Implement public methods deposit(), withdraw(), and getBalance() to
// manage the account...
#include <iostream>
#include <string>
using namespace std;
// class BankAccount
// {
//     int accountNum;
//     float balance;
// public:
//     string User;
//     float deposit(float depo)
//     {
//      cout << "Deposit Money : " << depo << "Rs" << endl;
//      balance += depo;
//     }
//     float withdraw(float withd)
//     {
//         cout << "Withdraw Money : " << withd << "Rs" << endl;
//         balance -= withd;
//     }
//     float getBalance()
//     {
//         cout << "balance :" << balance << "Rs" << endl;
//     }
//     void printAcc()
//     {
//         cout << "Account Number : " << accountNum << endl;
//     }
//     BankAccount(int acc, int bal)
//     {
//         accountNum = acc;
//         balance = bal;
//     }
// };
// int main()
// {
//     BankAccount b1(12424232, 6700);
//     b1.User = "Sri Devi";
//     cout << "User: " << b1.User << endl;
//     b1.printAcc();

//     b1.deposit(2343);
//     b1.withdraw(3221);
//     b1.getBalance();
//     return 0;
// }

// Question 2 : Create a class BankAccount with private attributes accountNumber and
// balance. Implement public methods deposit(), withdraw(), and getBalance() to
// manage the account...
#include <iostream>
#include <string>
using namespace std;
class BankAccount
{
    int accountNumber;
    int balance;

public:
    void deposit(int depo)
    {
        balance += depo;
    }
    void withdraw(int withd)
    {
        balance -= withd;
    }
    void getBalance()
    {
        cout << "Available Balance : " << balance << endl;
    }
    BankAccount(int acc, int bal)
    {
        this->accountNumber = acc;
        this->balance = bal;
    }
};
int main()
{
    BankAccount b1(24242, 4560);
    b1.getBalance();
    b1.deposit(789);
    b1.getBalance();
    b1.withdraw(990);
    b1.getBalance();
}