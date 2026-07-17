# POLYMORPHISM=> 
->> Polymorphism is the *third/forth pillar*(one of the pillar) of the OOPs...

Polymorphism is the ability of objects to take on *different forms* or behave in different ways *depending on the context* in which they are used.

*1. Compile Time Polymorphism

*2. Run Time Polymorphism

## 1. Compile Time Polymorphism:

1. Function Overloading

2. Operator Overloading

### Function Overloading: 

### Operator Overloading: 
->> returnType *operator* opSymbol(){.....}

->> *operator* -> syntax for operator function...

## 2. RUN TIME POLYMORPHISM:
* Function Overriding: Parent & Child both contain the same function with different implementation. The parent class function is said to be overriden..

### ->> Virtual Functions:
A virtual function is a member function that you expect to be redefined in derived classes...

* Virtual functions are dynamic in nature.

* Defined by the keyword "virtual" inside a base(parent) class and are always declared with a base class and overridden in a child class. 

* A virtual function is called during Runtime..

NOTE: child class property have more priority than inheritence class


# ABSTRACTION ========
--->> Forth pillar of the OOPs

Hiding all unnecessary details & showing only the important parts...

*Abstract* Classes & Pure Virtual Functions

### *Abstract* Classes: 
* Abstract classes are used to provide a base class from which other classes can be derived.
* They cannot be instantiated and are meant to be inherited.
* Abstract classes are typically used to define an interface for derived classes.(interface means blueprint)
->> Abstract classes have atleast one pure virtual function

## Pure Virtual Function=>
A pure virtual function (or *abstract function*) is a virtual function with no definition/logic. It is declared by assigning 0 at the time of declaration.

virtual void func() = 0;

## Difference between Encapsulation & Abstraction.........

Encapsulation: is the binding/wrapping of data & their funcion in a single unit called class....
Encapsulation talking about classes...

Abstraction is all about hiding unnecessary data and showing only the important part..

## Static Keyword->>

*Static Variables=>
Variables declared as static in a function are created & initialised once for the lifetime of the program. // in Function

Static variables in a class are created & initialised once. They are shared by all the objects of the class. // in Class

*Static Objects=>


## FRIEND CLASS & FRIEND FUNCTION==========>
A friend class or a friend function can access private and protected members of other classes in which it is declared as a friend.

-------------------------------------------------------------------------
# BY COPILOT==============>

🔷 POLYMORPHISM
Polymorphism is the third/fourth pillar of OOPs.
It refers to the ability of objects to take on different forms or behave differently depending on the context.

Types of Polymorphism:
- Compile-Time Polymorphism
- Run-Time Polymorphism

✅ 1. Compile-Time Polymorphism
Achieved via:
- Function Overloading
- Operator Overloading

🔹 Function Overloading:
Multiple functions with the same name but different parameters (type or number).
class Print {
public:
    void show(int a) {
        cout << "Integer: " << a << endl;
    }
    void show(double b) {
        cout << "Double: " << b << endl;
    }
};


Key Points:
- Resolved at compile time.
- Improves readability and reusability.

🔹 Operator Overloading:
Allows redefining the behavior of operators for user-defined types.
class Complex {
public:
    int real, imag;
    Complex(int r, int i) : real(r), imag(i) {}

    Complex operator+(const Complex &obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }
};


Syntax:
returnType operator opSymbol(parameters) { ... }


Best Practice:
Use operator overloading only when it improves code clarity.

✅ 2. Run-Time Polymorphism
Achieved via:
- Function Overriding
- Virtual Functions

🔹 Function Overriding:
Same function name in both parent and child classes with different implementations.
class Base {
public:
    void display() {
        cout << "Base class display" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived class display" << endl;
    }
};


🔹 Virtual Functions:
Used to achieve dynamic dispatch.
class Base {
public:
    virtual void show() {
        cout << "Base class show" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show" << endl;
    }
};


Key Points:
- Declared using virtual keyword.
- Enables dynamic binding.
- Called based on object type at runtime.
Note:
Child class methods override base class methods and take precedence.


🔷 ABSTRACTION
Fourth pillar of OOPs
Focuses on hiding unnecessary details and exposing only essential features.

- Definition: Abstraction is the process of hiding implementation details and showing only the essential features of an object.

- Purpose: It helps reduce complexity by focusing on what an object does rather than how it does it.

- Example in real life: When you drive a car, you only interact with the steering wheel, pedals, and gear. You don’t need to know how the engine or transmission works internally.

✅ Abstract Classes:
- Cannot be instantiated:You cannot create objects directly from an abstract class.
- Blueprint role: They act as a template for other classes. Derived classes must provide implementations for abstract methods.
- Contain pure virtual functions: At least one function must be declared as pure virtual (using = 0).

class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

Here:
- Shape is an abstract class.
- It defines a contract: every shape must be drawable.
- But it doesn’t specify how to draw — that’s left to derived classes.

✅ Pure Virtual Function:
- Syntax: Declared using = 0.
- No implementation in base class: It only provides a function signature.
- Forces derived classes to override: Any class inheriting must provide its own version of the function.

i.e. 
virtual void func() = 0;

Example: class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }
};

- Circle and Rectangle must implement draw().
- If they don’t, they themselves become abstract classes.

🎯 Why Use Abstraction?
- Encapsulation of complexity: Users don’t need to know internal details.
- Flexibility: Derived classes can provide different implementations.
- Polymorphism: Abstract classes + pure virtual functions enable polymorphic behavior (e.g., calling draw() on a Shape* pointer will execute the correct derived class’s method).

🔄 Difference: Encapsulation vs Abstraction

🔐 Encapsulation (Think: Protecting Data)
Encapsulation means wrapping data (variables) and the functions that work on that data into a single unit—called a class. It helps keep the internal details of an object safe from outside interference. For example, if you don’t want someone to directly change a variable, you can make it private and provide controlled access through get or set functions. This way, you decide how the data is used or modified. Encapsulation is mainly about security and control.

🎭 Abstraction (Think: Hiding Complexity)
Abstraction is about hiding the unnecessary details and showing only the important parts. It helps you focus on what an object does, not how it does it. For example, when you use a car, you just press the accelerator—you don’t need to know how the engine works. In programming, abstraction is achieved using abstract classes and pure virtual functions. It’s mainly used to design a clean interface or blueprint for other classes to follow.

🧠 Summary
- Encapsulation = Hides data inside a class and protects it using access modifiers (private, public, etc.).
- Abstraction = Hides internal logic and shows only the necessary features using abstract classes and interfaces.
Both are key to writing clean, secure, and scalable object-oriented code.



🔷 STATIC Keyword
🔷 What is static?
The static keyword in C++ changes the lifetime and scope of variables, functions, and class members.
- It ensures that something is created only once and persists across calls or instances.
- Depending on where it’s used (inside a function, class, or global scope), its behavior changes.

✅ Static Variables:
- In functions: Created once, retain value between calls.
- In classes: Shared among all instances.

class Counter {
public:
    static int count;
    Counter() { count++; }
};

int Counter::count = 0;


✅ Static Objects:
- Lifetime is entire program duration.
- Initialized only once.

void demo() {
    static int x = 0;
    x++;
    cout << x << endl;
}

# By Copilot :
🔷 What is static?
The static keyword in C++ changes the lifetime and scope of variables, functions, and class members.
- It ensures that something is created only once and persists across calls or instances.
- Depending on where it’s used (inside a function, class, or global scope), its behavior changes.

✅ Static Variables
1. Static Variables in Functions
- Normal local variables: Created each time the function is called, destroyed when the function ends.
- Static local variables: Created only once, retain their value between function calls, and live until the program ends.
Example:
void demo() {
    static int x = 0;  // Created once
    x++;               // Retains value between calls
    cout << x << endl;
}

int main() {
    demo(); // prints 1
    demo(); // prints 2
    demo(); // prints 3
}

Here, x is not reinitialized every time. It keeps its value across calls.

2. Static Variables in Classes
- Shared among all objects of the class.
- Belong to the class itself, not to individual objects.
- Must be defined outside the class (because memory is allocated separately).
Example:
class Counter {
public:
    static int count;   // Shared by all objects
    Counter() { count++; }
};

int Counter::count = 0; // Definition outside class

int main() {
    Counter c1, c2, c3;
    cout << Counter::count; // prints 3
}

👉 Every time a new Counter object is created, the same count variable is incremented
✅ Static Objects
- Lifetime: Exists for the entire duration of the program.
- Initialization: Done only once, even if the function is called multiple times.
- Scope: Limited to where it is declared (like inside a function), but its lifetime is global.
Example:
void demo() {
    static int x = 0;  // Initialized only once
    x++;
    cout << x << endl;
}
- First call → x = 1
- Second call → x = 2
- Third call → x = 3
Even though x is declared inside the function, it persists across calls because it’s static.

🎯 Key Takeaways
- Static in functions → Variable persists across calls.
- Static in classes → Variable shared among all objects.
- Static objects → Exist for the entire program duration, initialized only once.

⚡ Quick analogy:
Think of static variables like a whiteboard in a classroom.
- Every student (object) can write on it (shared).
- Even if the teacher (function) leaves and comes back, the writing (value) is still there.


🔷 FRIEND CLASS & FRIEND FUNCTION

✅ Friend Function:
Can access private/protected members of a class.

class Box {
private:
    int length;
public:
    Box() : length(10) {}
    friend void printLength(Box);
};

void printLength(Box b) {
    cout << "Length: " << b.length << endl;
}


✅ Friend Class:
One class can access private/protected members of another.

class A {
private:
    int data = 5;
    friend class B;
};

class B {
public:
    void show(A a) {
        cout << "Accessing private data: " << a.data << endl;
    }
};


Note:
Friendship is not inherited, not mutual, and not transitive.

# 📝 Notes on virtual and override in C++
🔹 Virtual Functions
- Declared in a base class using the virtual keyword.
- Enable runtime polymorphism (dynamic dispatch).
- When called through a base pointer/reference, the derived class implementation runs if it exists.
- Construction order: base → derived.
- Destruction order: derived → base.
- Always mark destructors as virtual in polymorphic classes to avoid undefined behavior.

Example
class Base {
public:
    virtual void print() { cout << "Base print"; }
};

class Derived : public Base {
public:
    void print() { cout << "Derived print"; }
};

Base* b = new Derived();
b->print(); // Output: Derived print

 Override Keyword
- Used in the derived class.
- Ensures the function actually overrides a base class virtual function.
- Provides compile-time safety: if the signature doesn’t match, the compiler throws an error.
- Prevents accidental mistakes (e.g., wrong spelling or parameters).
Example
class Base {
public:
    virtual void print() { cout << "Base print"; }
};

class Derived : public Base {
public:
    void print() override { cout << "Derived print"; }
};

🔹 Key Differences
| keyword |Where used|Purpose |Binding | Safety | 
| virtual |Base class  | Marks function for runtime polymorphism | Runtime | allows overriding | 
| override | Derived class |Ensures correct overriding of base virtual function | Compile-Time Check | Prevents mistake | 


🔹 Best Practices
- Always declare base class destructors as virtual in polymorphic hierarchies.
- Use override in derived classes for clarity and safety.
- Prefer const correctness when overriding functions that don’t modify state.
- Use final (optional) to prevent further overriding of a virtual function.


# 🔷 Binding in C++
Binding = deciding which function implementation should be called when you invoke a function.
There are two types in C++:

✅ Compile-time Binding (Static Binding)
- Definition: Function call is resolved at compile time.
- When it happens:
- Normal (non-virtual) functions.
- Function overloading.
- Operator overloading.
- Speed: Faster, because the compiler already knows which function to call.
- Limitation: No polymorphism — the function chosen depends only on the pointer/reference type, not the actual object type.
Example:
class Base {
public:
    void print() { cout << "Base print" << endl; } // non-virtual
};

class Derived : public Base {
public:
    void print() { cout << "Derived print" << endl; }
};

int main() {
    Base* b = new Derived();
    b->print();   // Output: Base print (compile-time binding)
    delete b;
}


👉 Even though b points to a Derived object, the compiler binds to Base::print() because the function is not virtual.

✅ Runtime Binding (Dynamic Binding)
- Definition: Function call is resolved at runtime.
- When it happens:
- Virtual functions.
- Function overriding in inheritance.
- Speed: Slightly slower (uses vtable lookup), but enables polymorphism.
- Benefit: Actual object type decides which function runs.
Example:
class Base {
public:
    virtual void print() { cout << "Base print" << endl; } // virtual
};

class Derived : public Base {
public:
    void print() override { cout << "Derived print" << endl; }
};

int main() {
    Base* b = new Derived();
    b->print();   // Output: Derived print (runtime binding)
    delete b;
}


👉 Because print() is virtual, the program checks the actual object type (Derived) at runtime and calls the correct function.

KEY DIFFRENCE: 

⚡ Quick Analogy
- Compile-time binding: Like booking a train ticket in advance — your seat is fixed before the journey starts.
- Runtime binding: Like choosing a cab on the spot — the actual car depends on what arrives at runtime.

✅ So the rule of thumb:
- Use compile-time binding for speed and simplicity.
- Use runtime binding when you need polymorphism (different behaviors depending on the actual object type).


# 🔷 Polymorphism in C++
Definition:
Polymorphism means “many forms”. In OOP, it allows the same function name or operator to behave differently depending on the context or the object type.

✅ Types of Polymorphism in C++
1. Compile-time Polymorphism (Static)
- Achieved by function overloading and operator overloading.
- Binding happens at compile time.
- Faster, but less flexible.
Example: Function Overloading
class Print {
public:
    void show(int x) { cout << "Integer: " << x << endl; }
    void show(double y) { cout << "Double: " << y << endl; }
};

int main() {
    Print p;
    p.show(10);     // Integer: 10
    p.show(3.14);   // Double: 3.14
}


👉 Same function name show, but different behavior depending on argument type.

2. Runtime Polymorphism (Dynamic)
- Achieved by virtual functions and function overriding.
- Binding happens at runtime using the vtable mechanism.
- Enables inheritance-based polymorphism.
Example: Virtual Function Override
class Base {
public:
    virtual void display() { cout << "Base display" << endl; }
};

class Derived : public Base {
public:
    void display() override { cout << "Derived display" << endl; }
};

int main() {
    Base* b = new Derived();
    b->display();   // Output: Derived display (runtime polymorphism)
    delete b;
}


👉 Even though b is a Base*, the actual object is Derived, so the derived version runs.

🎯 Key Differences
|  |  |  | 
|  |  |  | 
|  |  |  | 
|  |  |  | 
|  |  |  | 
|  | show(int)show(double) | Base::display()Derived::display() | 



⚡ Quick Analogy
- Compile-time polymorphism: Like a Swiss Army knife — same tool name, but different blades chosen depending on the situation (argument type).
- Runtime polymorphism: Like a universal remote — same button, but it controls different devices depending on which one you’re pointing at (actual object type).

✅ Best Practices
- Always declare base class destructors as virtual when using runtime polymorphism.
- Use override in derived classes for safety.
- Use compile-time polymorphism for performance-critical code, runtime polymorphism for flexible designs (e.g., frameworks, plugins, GUI components).

👉 In short:
- Compile-time polymorphism = same name, different forms decided by compiler.
- Runtime polymorphism = same name, different forms decided at runtime based on object type.







xxx--- at top left corner, whole right side almost , right bottom corner, whole left side vertically , left bottom corner
///// - all four side
 11111 - Right vertical, right bottom corner, right top corner
yyyy - left bottom , almost left side, left top corner
]]]] - left top
left ctrl: whole left side, left top & bottom corner , mid part of top and bottom too
capslock - right bottom
windows key: right bottom corner
function key : at left bottom corner and at more points too...
left alt: right bottom corner + a little bit side in horizontal and vertical too...                                                             
jjjjj - at some point
kkk - sometimes at left bottom
left shift - sometimes:  at various points : left top side ,right top corner ,right bottom side , left bottom corner , left bottom corner side...
..... : sometimes at bottom left corner
* : right vertical side
/ before power button: both top corners + right side , sometimes at few more points
right alt too.....
right control too : around right bottom and top corner + vertical right side 
left arrow: full bottom and right vertical side + half of left vertical side from the mid to left bottom
upper arrow too: at various points
down arrow: almost bottom side + left and right side too
right arrow: except left vertical side almost all
mute button too
volume down buttom : at top right corner and bottom left corner
volume up button: at all corners
light down : top horizontal and few more points
light up : almost all corners
delete: right top corner and left bottom corner
+: top right corner+++++++++
-: loose keywrds

99999900000++++++++++++++++++++------------999999999999666666666688888888887777777774444444455555555555566666663333333333222222222111111110000000......
wwwwwweeeeeeeerrrrrrrrttttttyyyyyyyyyyyyyyyyyyyyyuuuuuuuuuuuuuuuiiiiiiiiiiiiiiiiiioooooooooooooooooppppppppppppp[[[[[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\aaaaaaaaaaaaaaaaaaaaasssssssssssssssssssssssdddddddddddddddffffffffffffffffffffffffffffffffffffffffggggggggggggggggggggggggggggggggggghhhhhhhhhhhhhhhhhhhhhhhhhjjjjjjjjjggggggggggggghhhhhhhhhhhhhhhjjjjjjjjjjjjjjjjjjjjjjjjj kkkkkkkkkkkkkkkkkkkkkklllllllllllllllll;;;;;;;;;;;;;;;;;;'''''''''''''''''
zzzzzzzzzzzzzzzzzzx

vvvvvvvvvvvvvvbbbbbbbbbbbbbbbnnnnnnnnnnnnnnnnnnmmmmmmmmmmmmmmmmmm,,,,,,,,,,,,,,,,,,,......................////AaAaAAAAAAAAAAAAAAAAAAAAaAAAAAAAAAAAAAAAAAAAaAAAAAAAAAAAAAAAAAAAAAAAaAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAlllll
LlLLLLLLllllllllllllllLLlllLllLLLLLLLlLLLLLLlllLLLLLLLLlllLLLllllllLLLLLLLLLllllllLLLLLLLLLlLLLLLLLLLlLLLLLlLLLlLLLLlllllllllLLLLlLLL