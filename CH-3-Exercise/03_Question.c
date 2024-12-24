/*

Ques.3. What is the size of the float type variable?

Ans. 
The size of a float type variable in C is typically 4 bytes (32 bits). 
This is based on the IEEE 754 standard for single-precision floating-point representation, which most modern systems follow.

****************************************************Key Details About float**************************************************************:

1. Memory Size = 4 bytes (32 bits).
2. Precision = About 6-7 significant decimal digits.

Ques. How to Check the Size of float?
We can use the sizeof operator in C to determine the size of a float on a specific system.

*/

#include <stdio.h>

int main() {
    printf("Size of float: %zu bytes\n", sizeof(float));
    return 0;
}


