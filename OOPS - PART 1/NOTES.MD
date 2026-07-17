# OBJECT ORIENTED PROGRAMMING (OOPS) =>
-> OOPS -> Style of writing code..

# CLASSES & OBJECTS==>

Objects-> entities in the real world like PHone, boook , computer, student ,teacher etc..

->Each object have their own properties(sometimes called attributes) and their own functions(sometimes called member functions or methods)...

Classes-> group of these entities
In simple, class is a bluprint of object...

Note : First we create classs and then we create our multiple object...

# ACCESS MODIFIERS=> 

* private -> data & methods accessible inside class...(sensitive)
          -> They are also accesible in friend function...

* public -> data & methods accessible to everyone...

* protected -> data & methods accessible inside class & to its derived class...

# GETTERS & SETTERS=>
-> (THEY ARE SOME SPECIAL METHODS)

-> Setters are basically used to set the value of private...
-> Getters are basically used to get that value from private...

# 4. MAJOR PILLARS OF OOPS=> (IMPORTANT)

   ## WE SHOULD LEARN ALL THESE NAME, DEFINITION AND CONCEPTS VERY CLEARLY AS ITS VERY VERY IMPORTANT...

    1. *ENCAPSULATION*
    2. *INHERITANCE*
    3. *ABSTRACTION*
    4. *POLYMORPHISM*

# ENCAPSULATION=>
Encapsulation is *wrapping up* of data(properties) & member functions (methods) in a single unit(like class).\
It also implements data hiding... (USING ACCESS MODIFIERS)

# CONSTRUCTOR: 
-> (CONSTRUCTIONS ARE VERY IMPORTANT...)

->Construcor work is to allocate memory to an object...

-> Special method invoked automatically at time of *object creation* . Used for Inititalisation....

    * Same name as class
    * Constructor doesn't have a return type
    * Only called once(automatically), at object creation
    * Memory allocation happens when constructor is called...

    *this* is a special pointer in C++ that points to the current object.

    =>this->prop<= is same as =>*(this).prop<=
    -> example for c1.name => (this->prop) will (this->name)

NOTE: ITS POSSIBLE TO WRITE MULTIPLE CONSTRUCTOR IN A SINGLE CLASS WITH THE SAME NAME... WHICH YOU CAN CLEARLY SEE IN THE CONSTRUCTOR.CPP

    AND IN CONSTRUCTOR.CPP:-

    Car() // its default...
     // THIS IS A NORMAL CONSTRUCTOR which is also called NON-PARAMATISED CONSTRUCTOR..
    
    {
        cout << "CONSTRUCTOR WITHOUT PARAMS which is also called NON-PARAMATISED CONSTRUCTOR..\n";
    }

    Car(string nameValue, string colorValue) // PARAMATISED CONSTRUCTOR
    {
        cout << "CONSTRUCTOR WITH PARAMS..\n";
        this->name = nameValue; // this->prop
        // *this.name= nameValue; // *this.prop
        // name = nameValue;
        this->color = colorValue;
        // *this.color= colorValue; // *this.prop
        // color = colorValue;
    }

    -> ALL OF THIS CALLED *CONSTRUCTOR OVERLOADING*...
    -> In *CONSTRUCTOR OVERLOADING* : constructor have same name but their params are different...

## TYPES OF CONSTRUCTOR: 

### 1. Non-Paramaterized Constructor
its default...\
Have discuss already in constructor.cpp

### 2. Paramaterized Constructor
We have to initialise it...\
Have params and already discuss already in constructor.cpp

### 3. Copy Constructor
Special Constructor (default) which is used to copy properties of one object into another..

    ->Custom Copy Constructor:
    Car(Car &original){
        cout<<"copying..\n";
        name = original.name;
        price = original.price;
    }

## SHALLOW & DEEP COPY=>
*Shallow copy* copies references to original array(or dynamically allocating memory). But array remains same..\
Compiler generally creates a *shallow copy* for array.

- Definition: A shallow copy duplicates an object but only copies the references (pointers) to dynamically allocated memory, not the actual memory content.

-> Shallow copy me agar ham kuch c2 me change krenge to wo c1 me bhi change ho jaayega... You can see it clearly in ShallowCopy.cpp..

   ### Here is the reference: 
       class Car
       {
       public:
           string name;
           string color;
           int *mileage;

           Car(string nameVal, string colorVal)
           {
               this->name = nameVal;   // static allocation
               this->color = colorVal; // static allocation
               mileage = new int;      // Dynamic allocation
               *mileage = 12;
           }
       };

       int main()
       {
           Car c1("maruti 800", "red");
           Car c2(c1);
           cout << c2.name << endl;
           cout << c2.color << endl;
           cout << *c2.mileage << endl;
           cout << "punjabi" << endl;

           cout << c1.name << endl;
           cout << c1.color << endl;
           cout << *c1.mileage << endl;
           cout << "Twada butti daa sount " << endl;

           cout << "Changing c2 ki mileage: " << endl;
           *c2.mileage = 10;
           cout << *c2.mileage << endl; // 10
           cout << "punjabi" << endl;
           cout << *c1.mileage << endl; // 10
           cout << "Twada butti daa sount " << endl;
       }

- Effect:
- Static members (like string name, string color) are copied correctly because they manage their own memory.
- Dynamically allocated members (like int *mileage) are copied as pointers. So both objects point to the same memory location.

- Result:
- If you change c2.mileage, it also changes c1.mileage because both point to the same integer in memory.
- This is why in your program, after setting *c2.mileage = 10, printing *c1.mileage also shows 10.

-----------------------------------------------------------

*Deep copy* created a brand new copy of the array.
- Definition: A deep copy duplicates not only the object but also allocates new memory for dynamically allocated members and copies their values.

- Effect:
- Each object has its own separate copy of the data.
- Changes in one object do not affect the other.

- Implementation:
- You need to explicitly define a copy constructor that allocates new memory and copies the value.

Note : We need to define own copy constructor when *deep copy* is needed i.e. when class contains pointers to dynamically allocated memory.
   ### Here is the reference for *deep copy*:

    public:
    string name;
    string color;
    int *mileage;

    Car(string nameVal, string colorVal)
    {
        this->name = nameVal;   // static allocation
        this->color = colorVal; // static allocation
        mileage = new int;      // Dynamic allocation
        *mileage = 12;
    }

    // DEEP COPY
    // MY OWN Custom COPY CONSTRUCTOR FOR DEEP COPY========
    Car(Car &original)
    {
        cout << "Copying original to new..\n";
        name = original.name;
        color = original.color;
        mileage = new int; // allocate new memory
        *mileage = *original.mileage; // copy value, not pointer
    }

# This is deep copy:
- Instead of copying the pointer address, you allocate new memory for mileage.
- Then you copy the value stored in original.mileage.
- Result: c1.mileage and c2.mileage point to different memory blocks, each holding the same value initially.

# Why Deep Copy Matters
- Shallow copy problem: Both objects share the same pointer → changes affect both, and destructors cause double-delete errors.
- Deep copy solution: Each object has its own memory → safe, independent values.

# DESTRUCTOR:
-> Destructor is complete *opposite of constructor*...

-> Destructor work is to deallocate memory from an object..



## Custom Destructor: 

We create custom destructor when we have dynamically allocated memory allocation...

------------------------------------------------------------------------
# bY COPILOT=========================
-----------------------------------------------------------------------

🔥 Destructor in C++
🧠 Concept Overview:
- A destructor is a special member function in C++ that is automatically invoked when an object goes out of scope or is explicitly deleted.
- Its primary role is to release resources—especially memory—that were acquired during the object's lifetime.
- It is the opposite of a constructor, which initializes an object.
🛠 Syntax:
~ClassName() {
    // cleanup code
}


- No return type.
- No parameters.
- Only one destructor per class (no overloading).

🧹 Why Destructors Matter in DSA
In data structures like linked lists, trees, graphs, etc., we often use dynamic memory allocation (new keyword). If not properly deallocated, this leads to memory leaks.
Destructors ensure:
- Clean deallocation of heap memory.
- Safe destruction of nested or composite objects.
- Prevention of resource leaks in recursive structures.

🧪 Example: Custom Destructor in a Linked List Node
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }

    ~Node() {
        // Custom cleanup
        delete next; // recursively deletes the entire list
    }
};


⚠️ Note:
- This recursive deletion works only if each node owns its next.
- Be cautious with shared ownership—use smart pointers (std::shared_ptr, std::unique_ptr) in modern C++.

🧭 Best Practices:
- Always pair new with delete (or better, use RAII).
- Avoid manual memory management when possible—prefer STL containers and smart pointers.
- For classes managing dynamic memory, define a custom destructor to avoid leaks.

------------------------------------------------------------------

# INHERITANCE==
When properties & member functions of *base* class(base class/super class/ parent class) are passed on to the *derived* class(derived class/sub class/ child class). This is called inheritance...


## MODE OF INHERITANCE==

---------------------------------------------------------------------
Base class member   |  Mode of Inheritance
access specifer 
----------------------------------------------------------------------
                   | Public      |     Protected        |     Private
-----------------------------------------------------------------------
    Public           Public      | Protected            | Private
    Protected        Protected   | Protected            | Private
    Private          Not accessible  | Not accessible   | Not accessible
                       (Hidden)           (Hidden)          (Hidden)
------------------------------------------------------------------------

## TYPES OF INHERITANCE===

### 1. Single Inheritance:

 Base class -------------> Derived Class

### 2. Multi Level Inheritance:

 Base class -------------> Derived Class ----------------> Derived class

### 3. Multiple Inheritance:

 Base class ------------->|\  
                          |-/-------------> Derived Class
 Base class ------------->|/  
 .
 .
 .
 .
 .
 NOte:  We can use as much as class we want for multiple inheritance..

### 4. Hierachial Inheritance:

                        |-------------> Derived Class
BAse class -------------> 
                        |-------------> Derived Class

### 5. Hybrid Inheritance:

                        |---------> Derived Class --------> Derived Class
BAse class -------------> 
                        |---------> Derived Class




--------------------------------------------------------------------
# BY COPILOT==============
--------------------------------------------------------------------
🧬 INHERITANCE in C++
📘 Definition:
Inheritance is a fundamental concept in Object-Oriented Programming (OOP) where the properties and member functions of a base class (also called super class or parent class) are passed on to a derived class (also called sub class or child class).
This promotes code reusability, modularity, and hierarchical classification.

🔐 Modes of Inheritance
Inheritance behavior depends on the access specifier used during inheritance. Here's how base class members are inherited:

---------------------------------------------------------------------
Base class member   |  Mode of Inheritance
access specifer 
----------------------------------------------------------------------
                   | Public      |     Protected        |     Private
-----------------------------------------------------------------------
    Public           Public      | Protected            | Private
    Protected        Protected   | Protected            | Private
    Private          Not accessible  | Not accessible   | Not accessible
                       (Hidden)           (Hidden)          (Hidden)
------------------------------------------------------------------------


🔸 Note: Private members of the base class are never directly accessible in the derived class, regardless of inheritance mode.

🧩 Types of Inheritance
1️⃣ Single Inheritance
One base class → One derived class
class A { /* base */ };
class B : public A { /* derived */ };


2️⃣ Multi-Level Inheritance
Base class → Derived class → Another derived class
class A { };
class B : public A { };
class C : public B { };

3️⃣ Multiple Inheritance
One derived class inherits from multiple base classes
class A { };
class B { };
class C : public A, public B { };


⚠️ Be cautious of ambiguity and diamond problem—use virtual inheritance to resolve it.

4️⃣ Hierarchical Inheritance
Multiple derived classes inherit from a single base class
class A { };
class B : public A { };
class C : public A { };

5️⃣ Hybrid Inheritance
A combination of multiple types of inheritance
class A { };
class B : public A { };
class C : public A { };
class D : public B, public C { }; // Diamond shape


🧠 Use virtual keyword to avoid ambiguity in hybrid inheritance.

🧠 Why It Matters in DSA
Inheritance helps in:
- Building modular data structures (e.g., base Tree class → BinaryTree, AVLTree, etc.)
- Reusing common logic across multiple structures.
- Designing abstract base classes for generic algorithms.

