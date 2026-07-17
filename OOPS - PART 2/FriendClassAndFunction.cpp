#include <iostream>
#include <string>
using namespace std;

// Forward declaration (optional here, but shows the pattern when types reference each other)
// class B;  // If A needed to use B before B is defined, you'd declare B first.

// Class A holds a private member.
// By default, members in a class (not struct) are private if no access specifier is given.
class A
{
    // Private data: not accessible from non-friend/non-member code.
    string secret = "secret data..";

    // Friend class: grants B access to A's private/protected members.
    // Friendship is NOT inherited, NOT symmetric, and NOT transitive.
    friend class B; // friend class

    // Friend free function: this standalone function may access A's private members.
    friend void revealSecret(A &obj); // friend function

    // Note: Friendship does not expose A's internals publicly; it only whitelists specific entities.
};

// FRIEND CLASS
class B // becomes a friend class of A
{
public:
    // Use const reference if you don't modify A (good practice).
    // The 'friend class B;' in A allows access to A::secret here.
    void showSecret(const A &obj)
    {
        cout << obj.secret << endl;
    }
};

// FRIEND FUNCTION
// Also prefer const reference for read-only access.
void revealSecret(const A &obj){
    cout << obj.secret << endl;
}

int main()
{
    A a1;
    B b1;

    // Demonstration: friend class access
    b1.showSecret(a1); // OK: B is a friend of A

    // Demonstration: friend function access
    revealSecret(a1);  // OK: revealSecret is a friend of A

    // Attempting direct access to private member will NOT compile (expected error).
    // Uncomment to see the compiler error:
    // cout << a1.secret << endl; // ERROR: 'secret' is private within this context

    // Preferred style tip:
    // If you need broader but controlled access, consider adding a public getter in A:
    // e.g., in class A:
    // public:
    //     const string& getSecret() const { return secret; }
    // Then you can do:
    // cout << a1.getSecret() << endl;

    // Design notes:
    // - Use friendship sparingly; it couples types tightly.
    // - Friendship is not inherited: a class derived from B won't be a friend of A automatically.
    // - Friendship is not transitive: friends of B are not friends of A.
    // - Friendship is not symmetric: making B a friend of A does NOT make A a friend of B.

    return 0;
}