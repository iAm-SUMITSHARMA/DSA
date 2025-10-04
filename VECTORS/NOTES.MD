## Dynamic Memory Allocation:
 * Divided into two parts========

## a. STATIC(COMPILE) => 
-> example: int arr[10] = {1,2,3,...};

-> Three major points in static :

1. State memory compile time pe allocate hoti hai.. 

2. Fixed hoti hai , constant hoti hai.. Pahle se ptaa hota hai compiler ko ki itni memory allocate honi hai..

3. Statically jo allocation hota hai, wo hamare state memory ke andar hota hai...

## b. DYNAMIC(RUN TIME) =>
-> Three major points in dynamic :

1. Dynamic memory run time pe allocate hoti hai.. 

2. Variable hoti hai , Changed ho sakti hai....

3. Dynamically jo allocation hota hai, wo hamare system me heap memory ke andar dynamically allocation hota hai...

-> example: int *arr = new int[size]; => dynamically allocating memory..

## RHS(new int[size]) will create in the heap...

## but LHS(int *arr) will be create in the main..


## IMPORTANT NOTE:-
whenever we dynamically allocate memory using *new* keyword, we have to specifically delete that memory by ourselve.... Using *delete* function.


## DYNAMIC MEMORY ALLOCATION============== (BY SHRADHA KHAPRA)

## STATIC MEMORY ALLOCATION=>
* Allocation at compile time...
* Uses *stack* memory..
* gets *freed automatically*...

## DYNAMIC MEMORY ALLOCATION=>
* Allocation at run time (*new* operator)
* Uses *heap* memory 
* needs to be *freed explicity* (*delete* operator)

## MEMORY LEAK=>

A memory leak occurs when programmers create a memory in a heap and forget to delete it..

Leads to reduced performace due to depletion of available memory...

So, thats why we have to delete *new* operator with *delete* to deallocate that memory location...

## 2D DYNAMIC ARRAY:
    int **matrix = new int *[rows]; // integer array of pointer========

## DYNAMIC ARRAY:
    int *arr = new int[size]; // dynamically allocating memory..

## STL (STANDARD TEMPLATE LIBRARY OF C++)=>
    It is a library (collection ) of container classes, algorithms & iterators. 
    It contains the implementation of common data structures like vectors, stacks, maps etc.

## VECTORS =>
Like Dynamic arrays that can resize dynamically at runtime. \
They are *stored contiguously* in memory.

    vector<int> vec1;
    vector<int> vec2 = {1,2,3,4};
    vector<int> vec3(5,-1); // output: -1 -1 -1 -1 -1

In Vectors like dynamic array , we do not have to allocate or deallocate memory ...\
In simple words.. in dynamic array.. we have to allocate and deallocate memory..\
But in vectors , we do not have allocate or deallocate memory.. 
It happens automatically in vector..\
This is a plus point in vector...

# Constructor:
Constructor is basically nothing but a function which is used to initialize an object..\
example:     vector<int> vec3(5, -1); // (5,-1) This is a fill constructor..

## VECTOR IMPLEMENTATION IN MEMORY=>
vector size -> no. of element present in vector
vector capacity -> max no. of element that vector can hold..

## 1D VECTOR:
vector<int> arr;

## 2D VECTOR:
vector<vector<int>> matrix; // vectors of vector