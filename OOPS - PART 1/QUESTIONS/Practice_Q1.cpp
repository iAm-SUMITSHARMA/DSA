// Create a User class with properties : id (private), username(public) & password(private).
// Its id should be initialized in a parameterised constructor.
// It should have a Getter & Setter for password.

// #include <iostream>
// #include <string>
// using namespace std;
// class User
// {
// private:
//     int id;
//     string password;

// public:
//     string username;
//     User(int idValue)
//     {
//         this->id = idValue;
//         // id = idValue;
//     }
//     // Setter
//     void setPassword(string passwordVal)
//     {
//         this->password = passwordVal;
//         // password = passwordVal;
//     }
//     // Getter
//     string getPassword()
//     {
//         return password;
//     }
// };

// int main()
// {
//     // If its in a constructor , then we do it like this...
//     User user1(87);
//     // If its in a public, then we do it like this..
//     user1.username = "Sumit";
//     // And when its in a private folder, then we simply do it with the help of setter and getter...
//     user1.setPassword("Sumit1718"); // set password with setter

//     cout << "Username: " << user1.username << endl;      // Direct print username
//     cout << "Password: " << user1.getPassword() << endl; // get password with getter
// }

// Create a User class with properties : id (private), username(public) & password(private).
// Its id should be initialized in a parameterised constructor.
// It should have a Getter & Setter for password.

#include <iostream>
#include <string>
using namespace std;
class User
{
    int id;
    string password;

public:
    string username;
    User(int idValue)
    {
        this->id = idValue;
    }
    // getter for id:
    int getId()
    {
        return id;
    }
    // setter for password:
    void setPassword(string passwordValue)
    {
        password = passwordValue;
    }
    // getter for password:
    string getPassword()
    {
        return password;
    }
};
int main()
{
    User s1(1807);
    s1.username ="Sumit";
    s1.setPassword("sumit1822");
    cout<<s1.username<<endl;
    cout<<s1.getId()<<endl;
    cout<<s1.getPassword()<<endl;
}