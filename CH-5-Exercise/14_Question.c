// Ques.14.Write a program to swap values of two int variables in single line arithmetic expression.

#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 5, b = 10;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b - (b = a);

    printf("After swapping: a = %d, b = %d", a, b);

    getch();
}




/*
Explanation:

1. Expression Breakdown : a = (a + b) - (b = a);

(a). b = a: Assigns the value of a to b.
(b). a + b: Adds the original values of a and b.
(c). (a + b) - (b = a): Computes the new value of a by subtracting the original a (now stored in b) from the sum.

2. How It Works:
The assignment (b = a) updates b with the original value of a.
Simultaneously, the arithmetic operations adjust the values of both variables.

3. Result : After the expression executes, a and b are swapped.

*/
