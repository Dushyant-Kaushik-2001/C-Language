/*

Ques.4. What is the value of an uninitialized variable?
Ans.

Variable Type	                      Default Value
1.Local Variables	     =           Undefined (garbage value)
2.Global Variables	     =               Zero
3.Static Variables	     =               Zero
4.Dynamically Allocated	 =           Undefined (unless calloc is used)

In C, the value of an uninitialized variable depends on where it is declared:

1. Local Variables (Automatic Variables):

(A) Value = Undefined (garbage value).
(B) Localvariables, declared inside a function or block without initialization, are not automatically initialized.
(C) They can hold random, unpredictable values left in memory.

Example:

#include <stdio.h>
int main() 
{
    int localVar;                                      // Uninitialized local variable
    printf("Value of localVar: %d\n", localVar);       // Undefined behavior
    return 0;
}
The output will vary and is generally garbage.


2. Global or Static Variables:

(A) Value = Automatically initialized to zero (or 0.0 for floats, NULL for pointers).
(B) Global variables and variables with static storage duration are stored in a special segment of memory (the BSS segment) and are 
initialized to default values by the compiler.

Example:

#include <stdio.h>
int globalVar;           // Uninitialized global variable
static int staticVar;    // Uninitialized static variable
int main() 
{
    printf("globalVar: %d\n", globalVar);              // Always 0
    printf("staticVar: %d\n", staticVar);             // Always 0
    return 0;
}
The output will be:

globalVar: 0
staticVar: 0


3. Dynamic Memory (Heap):

(A) Value = Undefined.
(B) Memory allocated dynamically using malloc, calloc, or realloc behaves differently:
    *malloc or realloc=The memory is uninitialized and contains garbage values.
    *calloc=The memory is initialized to zero.
    
Example:

#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int *p = malloc(sizeof(int)); // Uninitialized heap memory
    printf("Value at p: %d\n", *p); // Undefined (garbage value)
    
    int *q = calloc(1, sizeof(int)); // Memory initialized to 0
    printf("Value at q: %d\n", *q); // Always 0

    free(p);
    free(q);
    return 0;
}


*/