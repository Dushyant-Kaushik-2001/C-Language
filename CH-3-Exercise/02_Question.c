/*

Ques.2. What kind of statements can be written outside the function body?

Ans. In C, we can write the following kinds of statements outside a function body:

1.Global Variable Declarations:

We can declare global variables outside any function.These variables are accessible from any part of the program.
OR
Variables declared outside any function have global scope, meaning they are accessible throughout the entire program after their declaration.
Example:

int globalVar = 10;                          // Global variable

2. Function Declarations (Prototypes):

We can declare function prototypes to inform the compiler about the existence of a function before its actual definition. 
This allows you to call the function from other parts of the code even if its definition comes later in the file.
OR
Functions can be declared outside any function body to make them accessible to all other functions.
Example:

void myFunction(int a);                      // Function prototype
                     
3.Preprocessor Directives:

Preprocessor directives, like #include and #define, are also written outside function bodies.
OR
Preprocessor commands, starting with #, are used to include files, define macros, or perform conditional compilation.
Example:

#include <stdio.h>                              // Include standard input-output library
#define SQUARE(x) ((x) * (x))                  // Macro definition


*/