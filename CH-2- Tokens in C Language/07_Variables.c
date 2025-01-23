/*

----------------------------------------------------------Variables in C----------------------------------------------------------------------

Variables are the names of memory locations where we store Data.
i.e.A variable is the name of the memory location. It is used to store information. Its value can be altered and reused several times. 
It is a way to represent memory location through symbols so that it can be easily identified.
Variables are key building elements of the C programming language used to store and modify data in computer programs. 
A variable is a designated memory region that stores a specified data type value. 
Each variable has a unique identifier, its name, and a data type describing the type of data it may hold.

1. When we run any program, it consumes memory in RAM till its execution in process. 
To perform a task program can use this memory for various reasons. 
One of the important reasons is to store needful data, which is going to be used in processing. 
In addition of two numbers program, program needs to preserve two data until addition task is over. 
We need to reserve memory blocks to store these data, and these memory blocks should be named for future reference in the program. 

2. It depends on the program, how many memory blocks are required to handle data. 
In addition of two numbers, three memory spaces should be reserved, two blocks for two numbers that to be added and third block is to 
store result. 
These memory blocks are variables. They have names for identification.

3. In C, variables are named storage locations used to hold data that can be manipulated during the execution of a program. 
They are defined with a type that determines what kind of data they can store (e.g., integers, floating-point numbers, characters, etc.).

4. In C, a variable is a named storage location in memory that holds a value. 
Variables allow programs to store and manipulate data during execution.


***************************************************Variable naming Rules*********************************************************************

1.Variable name is any combination of alphabet, digit and underscore. No other symbol is allowed. 
 
2.Valid variable name cannot start with digit.      
(Matlab phla letter digit nhi ho sakta doosra teesra leeter hum digit rakh sakte hain)

valid                       Invalid
a                           a$
a25                         A.b
a_2_b_3                     x-1

*****************************************************Rules for Naming Variables*************************************************************

1. Must begin with a letter (A-Z or a-z) or an underscore (_).
2. Can include letters, digits (0-9), or underscores.
3. Cannot use keywords (e.g., int, if).
4. Case-sensitive (age and Age are different).
5. No special characters allowed (e.g., $, #).


****************************************************Types of Variables**********************************************************************

1. Integer (int): Stores whole numbers.

2. Floating-point (float, double): Stores real numbers with decimal points.

3. Character (char): Stores single characters.

4. Derived types: Arrays, pointers, structures, and unions.


*/