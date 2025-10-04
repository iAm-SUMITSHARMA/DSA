# TIME COMPLEXITY===>

-->Time Complexity is NOT the actual time taken...

-->> Time Complexity is amount of time taken up by an algorithm *as a function* of input size(n).

-->> Time Complexity is a relation between amount of time taken up by an algorithm - no. of operation (y-axis) and n-input size (x-axis)..


# BIG 0 NOTATION====>

*Upper Bound--> 
Always try to find *worst* case complexity..

# Calculating Big O-- (Ways)
1. Graph
2. Mathmetical Functions
3. Intuition

## Calculating Big O from Functions:
i.e. TC -> 3n^2 + 5^n + 6
Solution- 
1. ignore constants -> n^2 + n + 1
2. remove smaller terms (or pick the largest one)-> n^2

So, time complexity (TC) will be n^2..

## Mathematical Formula for Big O Notation:
-> This mathematical formula is totally theorotical formulaa.. And no one will ask you this in interview...

--->> worst case TC = lim n-> infinity {(|f(n)|)/(g(n))} < infinity , where gn is........



# OTHER NOTATIONS: 
* Big Omega
--> Lower Bound (best case TC)

* Big Theta 

--> Average Bound (avg case TC)

====> Loose Time complexity: 
* small o
* small omega
* small theta


# SPACE COMPLEXITY=> 
Amount of extra space occupied by an algorithm *as a function* of input size(n).

--->> Space complexity is a relation between extra space occupied and input size -n ...

---->> Space complexity is always count for large value of n...

IMPORTANT: TC>>>>>>SC

*Space Complexity = maximum depth * memory/space in each call

## COMMON TIME COMPLEXITIES:

O(1)
O(log n)
O(n)
O(n^2)
O(2^n)-> Exponential time complexities.. In some cases we can see.. O(3^n) ,,,, O(4^n) ,,,, O(6^n)..... so more.. 
AND IT IS THE WORST TIME COMPLEXITY...


<> O(1)/ CONSTANT

    example: int arr [5] = {1,2,3,4,5};
         cout<<"apnacollege";

<> O(n)/ LINEAR

    example: int arr [5] = {1,2,3,4,5};
             int n = 5;
             for (int i = 0; i<n ; i++){
                cout<<arr[i];            
            }

<> O(n^2)/ QUADRATIC

    example: 
            for (int i = 0; i<n ; i++){
                for (int j = 0; j<n ; j++){
               // SOME CONSTANT WORK          
                }         
            }
        
NOTE: In BINARY SEARCH: We Get O(logn)/LOGARITHMIC TC
int binSearch===============>>>

# MASTER'S THEOREM====>>
->> Help in solving complex time complexities...