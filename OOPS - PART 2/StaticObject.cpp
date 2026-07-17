#include <iostream>
#include <string>
using namespace std;
class Example
{
public:
    Example()
    {
        cout << "Constructor..." << endl;
    }
    ~Example()
    {
        cout << "Destructor..." << endl;
    }
};

int main()
{
    int a = 0;
    if (a==0)
    {
        //  Example eg1;
        static Example eg1; // static object.. have life span of lifetime..
    }
    cout<<"Code ending..."<<endl;
    return 0;
}

// EXPLANATION: 
- Condition evaluation: a is 0, so if (a==0) is true and the block executes.
- Static local object creation: static Example eg1;
- Storage duration: Static storage duration. It is constructed the first time execution reaches this line and it persists until program termination.
- Scope vs lifetime: Scope is limited to the if block (you cannot access eg1 outside), but its lifetime is the entire program, not just the block.
- Initialization timing: Happens once, on the first pass through the if block. If the condition were false on later runs (e.g., in a loop), it would not reconstruct; the object already exists.
- Non-static (commented) contrast: If you used Example eg1; without static, it would be:
- Automatic storage duration: Constructed when the block starts, destroyed immediately at the end of the block.
- Effect: You’d see “Constructor…” then “Destructor…” before “Code ending…”.

Execution order and program output
- When entering the if-block: eg1 is constructed once → prints “Constructor…”.
- After the block: cout << "Code ending..." << endl; → prints “Code ending…”.
- At program termination: Static local eg1 is destroyed → prints “Destructor…”.
So the output sequence is:
- Constructor...
- Code ending...
- Destructor...

Key takeaways
- Static local object: Lives for the entire program; constructed upon first encounter, destroyed at program end.
- Scope does not equal lifetime: eg1 is out of scope after the block, but it’s still alive until termination.
- Deterministic destruction timing: Destruction happens after main returns, which is why “Destructor…” appears last.

Bonus: common interview notes
- Thread-safety (C++11+): Initialization of function-local static variables is thread-safe; constructed exactly once even in concurrent contexts.
- Order of destruction: Function-local statics are destroyed during static deinitialization; exact order among different translation units can be tricky, but within one unit it’s reverse order of construction.
