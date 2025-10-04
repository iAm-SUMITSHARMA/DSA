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

✅ Abstract Classes:
- Cannot be instantiated.
- Serve as a blueprint for derived classes.
- Must contain at least one pure virtual function.

class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};


✅ Pure Virtual Function:
Declared with = 0 and has no implementation in the base class...

i.e. 
virtual void func() = 0;


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

