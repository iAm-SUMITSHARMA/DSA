## BITWISE OPERATORS=>

## BITWISE AND (&):
 0 & 0 -> 0
 0 & 1 -> 0
 1 & 0 -> 0
 1 & 1 -> 1

## BITWISE OR ( | ):
 0 | 0 -> 0
 0 | 1 -> 1
 1 | 0 -> 1
 1 | 1 -> 1

## BITWISE XOR ( ^ ): 
-> XOR means Exclusive OR
-> Rules => if the bit is same then it will return 0 and if the bit is different it will return 1...

 0 ^ 0 -> 0
 0 ^ 1 -> 1
 1 ^ 0 -> 1
 1 ^ 1 -> 0

## ONE'S COMPLEMENT=>
Binary Not OPerator: ~ -> tilde
Basically, if ~0 -> 1 , 
       and if ~1 -> 0

# A Very Interesting Example: let num = 6 and calculate ~6...

STEP 1: Calculate 1's complement form of 8 bits of 6=>

    num =  6 -> 00000110
        => ~6 -> 11111001 ( 1's complement form)

Note 1: The extreme left bit is the most significant bit(MSB).. which tell us about the sign of the bit whether its positive or negative... If its 1 then its negative and if its 0 then its positive..

 The rest of the bit  is the magnitude like in the case of - ~6 (1's complement form of 6), the magnitude is 1111001

Now we have two things.. 

    First MSB  which is negative..
    Second magnitude which is 1 1 1 1 0 0 1

STEP 2: Now calculate the one's complement of the magnitude...
magnitude = 1 1 1 1 0 0 1
~magnitude = 0 0 0 0 1 1 0

STEP 3: Add 1 to the ~magnitude..

       ~magnitude = 0 0 0 0 1 1 0
                              + 1
                 => 0 0 0 0 1 1 1
=> now we have a new magnitude which is ( 0 0 0 0 1 1 1 )

-> This magnitude ( 0 0 0 0 1 1 1 ) is equal to 7
-> Sign of this magnitude ( 0 0 0 0 1 1 1 ) is minus

So , (~ 6 => -7 =( 0 0 0 0 1 1 1 ))

## Basically all of the process is called 2's complement...
And this,
##  magnitude ( 0 0 0 0 1 1 1 ) is called two's complement form..

## So , basically in  our system negative numbers stored in the Two's complement form...

Similarly, ~0 = -1

## BINARY SHIFT OPERATORS=>

# Left Shift <<
     -> Example: 7<<2 means num << i pos
     binary code of 7 = 0 0 0 0 0 1 1 1
     -> we have to *left shift* it by 2 position..

     1st position:  0 0 0 0 1 1 1 *0*
     Note : *0* was an empty space after doing left shift... Whenever we do *left shift* or *right shift* ... *We feel empty spaces by 0*....
     And *0* written just to denote the empty space....

     In actual it is: 1st position:  0 0 0 0 1 1 1 0

     2nd Position: 0 0 0 1 1 1 *0* *0*
     Now, 0 0 0 1 1 1 0 0 is binary code of 28...
     it comes from here,,,,
     0     0     0     1     1     1     0     0 
                      2^4   2^3   2^2   2^1   2^0
    
    *=> 16 + 8 + 4 = 28*, which we have already verified in our BINARY_SHIFT_OPERATOR.cpp
    YOu can check it there..

   # HERE IS A PLUS POINT FOR YOU===========>
    if a<<b => final answer => a*2^b
    for example : 7<<2 => final answer => 7*2^2 = 28

# Right Shift >>
    -> Example: 7>>2 means num >> i pos
     binary code of 7 = 0 0 0 0 0 1 1 1
     -> we have to *right shift* it by 2 position..

     1st position:  *0* 0 0 0 0 0 1 1

     2nd Position: *0* *0* 0 0 0 0 0 1
     Now, 0 0 0 0 0 0 0 1 is binary code of 1...

   # HERE IS A PLUS POINT FOR YOU===========>
    if a>>b => final answer => a/2^b
    for example : 7>>2 => final answer => 7/2^2 = 1.__ =  1

## BIT MASKS: 
Bit masks are used to access specific bits in a byte of data..

# Set ith bit=
set kaa mtlb hai ..
agar 0 hai to 1 ho jaaye aur agar 1  hai to bhi 1 ho jaye...
i.e -> 0 -> 1
       1 -> 1

## FAST EXPONENTIATION: O (log n)
Note : time complexity of O(logn) is quit better than linear time complexity = O(n)

    x^n => example : 3^5 
    Step 1: Convert the power into the binary form: 
         i.e : 3^5 => 5 =>  1    0    1
    Step 2: assign this => 3^4  3^2  3^1 
    Step 3: int ans = 1;
                ans = 1*3^4*1*  3^2*0*  3^1*1
                ans = 1*3^4*1*  0  3^1*1
                ans = 1*3^5