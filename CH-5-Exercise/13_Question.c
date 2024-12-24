// Ques.13.Write a program to swap two integer variable data without using third variable and arithmetic operators.

#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Swap using bitwise XOR
    a = a ^ b; // Step 1
    b = a ^ b; // Step 2
    a = a ^ b; // Step 3

    printf("a = %d b = %d", a, b);

    getch();
}
