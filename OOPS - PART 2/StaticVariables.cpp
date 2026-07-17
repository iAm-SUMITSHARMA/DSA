#include <iostream>
#include <string>
using namespace std;
// static variables inside a function: 
void counter()
{
    static int count = 0; // static variable in a function
    count++;
    cout << "Count : " << count << endl;
}

// static variables inside a class:
class Example
{
public:
    // static const int x = 0; // static variable in a class
    static int x; // static variable in a class
};

int Example::x = 0;
// - Declaration vs definition: static int x; declares a class-level variable; memory is not allocated here. The line int Example::x = 0; defines and initializes it in the global scope.
// - Shared state: x is shared across all instances of Example. There is only one x for the entire class.
// - Commented line context: static const int x = 0; would be allowed to be initialized inside the class only if x is a const integral with internal linkage; here you chose a non-const int, so it must be defined outside.

// Main function and step-by-step execution

// - Object creation: Four Example objects are constructed, but they don’t modify x directly. The static x remains at its current value regardless of how many objects exist.
// - Access pattern: You’re accessing the shared static x via different instances (eg1.x, eg2.x, etc.). While valid, the clearer style is Example::x.
// - Post-increment behavior: x++ returns the current value, then increments.
// - First print: eg1.x++ prints 0, then x becomes 1.
// - Second print: eg2.x++ prints 1, then x becomes 2.
// - Third print: eg3.x++ prints 2, then x becomes 3.
// - Fourth print: eg4.x++ prints 3, then x becomes 4.
// - Final state: After all prints, Example::x equals 4.

// Recommended style and small improvements
// - Access static via class: Prefer cout << Example::x++ << endl; for readability and to signal class-level access.
// - Demonstrate function static: If you uncomment the counter() calls, you’d see:
// - Output sequence: Count : 1, Count : 2, Count : 3, Count : 4, Count : 5.
// - Const correctness: If x were intended as a compile-time constant, use static constexpr int x = 0; inside the class. For mutable shared state, keep the out-of-class definition as you have.
// What this teaches
// - Static in functions: Persists across calls, initialized once.
// - Static in classes: Shared across all instances, defined outside the class.
// - Post-increment nuance: Prints the old value, then increments, which explains the 0–3 outputs even though x ends at 4.

int main()
{
    counter();
    counter();
    counter();
    counter();
    counter();
    Example eg1;
    Example eg2;
    Example eg3;
    Example eg4;
    cout << eg1.x++ << endl; // 0
    cout << eg2.x++ << endl; // 1
    cout << eg3.x++ << endl; // 2
    cout << eg4.x++ << endl; // 3
    return 0;
}