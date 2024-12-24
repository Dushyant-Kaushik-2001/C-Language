/*

Ques.7. What is the difference between a keyword and a function?
Ans.
Feature	                             Keyword	                                   Function
1. Definition	                Reserved word in C.	                          Block of code performing a specific task.
2. Modifiability	         Cannot be modified or redefined.	                  Can be user-defined or library-defined.
3. Purpose	                Defines syntax and language structure.	          Encapsulates logic and enables reuse.
4. Examples	                int, return, if, while.	                              printf(), scanf(), main(), add().
5. Execution	            Does not execute any operation.	                  Executes specific tasks when called.

In summary, keywords are fundamental to the structure and syntax of C, while functions are used to implement functionality and logic in a
program.
(A). Definition
***Keyword***:
1. A keyword is a reserved word in the C language that has a predefined meaning and cannot be used as an identifier (e.g., variable or function name).
2. Examples: int, float, return, if, while.

***Function***:
1. A function is a block of code that performs a specific task.
2. Functions can be predefined (standard library functions like printf) or user-defined.
3. Example:
void myFunction() {
    printf("This is a function.\n");
}

(B). Purpose
***Keyword***:
1. Keywords are used to define the syntax and structure of the language.
2. They serve as building blocks for writing valid C programs.
3. Example:
int a = 10; // 'int' is a keyword that defines the data type.

***Function***:
1. Functions encapsulate reusable code logic and promote modular programming.
2. They perform specific tasks and can return values or perform actions without returning values.

(C). User-defined vs. Predefined
***Keyword***:
1. Fixed by the C language; cannot be redefined or altered.
2. Example: You cannot create a variable named while or return:
int while = 5;                   // Error: 'while' is a reserved keyword.

***Function***:
1. Functions can be user-defined or predefined.
2. Example of a predefined function:
printf("Hello, world!");                  // Predefined function from stdio.h
3. Example of a user-defined function:
int add(int a, int b) {
    return a + b;
}


(D) Example Program:
*/

#include <stdio.h>

int add(int a, int b)                    // Function definition
{                    
    return a + b;                        // 'return' is a keyword
}

int main() 
{
    int x = 5, y = 10;                   // 'int' is a keyword
    int sum = add(x, y);                 // 'add' is a function
    printf("Sum: %d\n", sum);            // 'printf' is a predefined function
    return 0;                            // 'return' is a keyword
}

