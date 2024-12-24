// Ques.14.Write a program to check whether a number is odd or even without using modulus (%) operator .

#include <stdio.h>

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if ((x & 1) == 0)
    {
        printf("%d is an even number",x);
    }
    else
    {
        printf("%d is an odd number",x);
    }

    return 0;
}



/*

Logic:
1.The bitwise AND operator (&) is used to check if the least significant bit (LSB) of the number is 0 or 1.
(a)If the LSB is 0, the number is even.
(b)If the LSB is 1, the number is odd.

2.The expression (num & 1) extracts the LSB of the number:
(a)For even numbers, the LSB is 0 (result of num & 1 is 0).
(b)For odd numbers, the LSB is 1 (result of num & 1 is 1).

*/