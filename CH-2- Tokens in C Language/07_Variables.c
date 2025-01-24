/*
----------------------------------------------------------Variables in C----------------------------------------------------------------------

Variable ek container (dibbey) ki tarah hota hai jo program ke andar data (value) ko store karta hai.
(a). Iske andar hum numbers, characters, ya koi bhi data rakh sakte hain.
(b). Iske andar ka data change ho sakta hai (constant ke opposite).

Example:
Suppose humne ek box banaya jisme likha hai marks, aur andar humne 90 rakha.
Box ka naam hai: marks
Box ke andar ki value hai: 90
Box ke andar jo rakhenge, woh program ke execution ke dauraan change ho sakta hai.

1. When we run any program, it consumes memory in RAM till its execution in process. 
To perform a task program can use this memory for various reasons. 
One of the important reasons is to store needful data, which is going to be used in processing. 
In addition of two numbers program, program needs to preserve two data until addition task is over. 
We need to reserve memory blocks to store these data, and these memory blocks should be named for future reference in the program. 

2. It depends on the program, how many memory blocks are required to handle data. 
In addition of two numbers, three memory spaces should be reserved, two blocks for two numbers that to be added and third block is to 
store result. These memory blocks are variables. They have names for identification.

3. Variables are the names of memory locations where we store program's data during execution of program.


***************************************************Variable naming Rules*********************************************************************

1.Variable name is any combination of alphabet (a to z , A to Z), digits (0 to9) and underscore(_). No other symbol is allowed. 
 
2.Valid variable name cannot start from a digit i.e Naam number se start nahi ho sakta.   
(Kisi bhi variable ka naam digit se start nhi hoga underscore aur alphabet se ho sakta hai lekin doosra teesra leeter hum digit rakh sakte hain)

3. Variable name cannot be a keyword (e.g., int, if). 

4. Case-sensitive (age and Age are different).

5. Special characters allowed nhi hain (e.g., $, #) bas _ allowed hai..

valid                       Invalid
a                           a$
a25                         A.b
a_2_b_3                     x-1
a_2                         s.i
_A                          x y
S2                          2x
IF                          if



*/