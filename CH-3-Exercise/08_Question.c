/*

Ques.8. Explore the use of type modifiers in C language?

Ans. In the C programming language, type modifiers are keywords used to alter the properties of data types to suit specific needs. 
They affect the storage size, range, and sometimes even the behavior of variables. 
Below is an exploration of common type modifiers in C:

1.***************************************************Signed and Unsigned*****************************************************************

(a) Used to specify whether a variable can store both positive and negative values (signed) or only non-negative values (unsigned).

(b) Examples:
signed int x;                                 // Default for int, can hold negative and positive values.
unsigned int y;                              // Holds only positive values and increases the maximum range.
printf("%d", x);                            // Outputs a signed integer.
printf("%u", y);                           // Outputs an unsigned integer.


2.****************************************************Short and Long********************************************************************

(a) Used to modify the size of integer types, depending on the system and compiler.

(b) Examples:
short int small;                           // Smaller range, usually 2 bytes.
long int large;                           // Larger range, usually 4 or 8 bytes.

(c) short is often used to save memory.

(d) long allows for a larger range, especially for large integers or precise calculations.


3.*********************************************************Const**************************************************************************

(a) Declares a variable whose value cannot be modified after initialization.

(b) Examples:
const int max = 100;
 // max = 200;    // Error: assignment of read-only variable

(c) Ensures immutability and enhances code readability and reliability.


4.************************************************************Volatile**********************************************************************

(a) Informs the compiler that a variable may be changed at any time, bypassing any optimizations.

(b) Examples:
volatile int status;
// Useful for variables that can change due to external events, like hardware or interrupts.


5.********************************************************Restrict*************************************************************************

(a) Indicates that a pointer is the sole initial means of accessing the object it points to.

(b) Examples:
void process(int * restrict p) 
{
    *p = 10; // Compiler assumes no aliasing for optimization.
}

(c) Primarily used in performance-critical applications to allow better optimization.


6.*********************************************************Static***************************************************************************

(a) Changes the storage duration of a variable:
1. Local: Persists for the program's lifetime.
2. Global: Restricts visibility to the file in which it is declared.

(b) Examples:
void counter() 
{
    static int count = 0; // Retains value across function calls.
    count++;
    printf("%d\n", count);
}


7.*********************************************************Register**********************************************************************

(a) Suggests that the variable be stored in a CPU register for faster access.

(b) Examples:
register int counter;                              // Hint for optimization.

(c) Modern compilers often ignore this as they automatically optimize register usage.


8.*********************************************************Atomic************************************************************************

(a) Ensures atomic (indivisible) operations for multithreading scenarios (introduced in C11).

(b) Examples:
#include <stdatomic.h>

atomic_int count = 0;
atomic_fetch_add(&count, 1);                               // Atomic increment.


9.**************************************************Combinations of Type Modifiers********************************************************

(a) Type modifiers can often be combined to create specific configurations:
unsigned long int x;                                    // Large unsigned integer.
volatile const int y = 10;                             // Read-only and volatile variable.


@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@Practical Applications@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

1. Memory Optimization = Use short or unsigned where smaller ranges suffice.
2. Concurrency = Use volatile or atomic to ensure consistency in multithreaded environments.
3. Code Optimization = Use register and restrict for performance improvements.
4. Immutability = Use const to protect variables from unintended changes.

*NOTE = Type modifiers make C flexible and powerful for various applications, from embedded systems to high-performance computing.


*/