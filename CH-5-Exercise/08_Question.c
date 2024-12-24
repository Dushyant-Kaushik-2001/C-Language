//.Ques.8. Write a program to swap values of two int variables without using third variable.

#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    // Swapping without a third variable
    a = a + b;              // Step 1: Add a and b
    b = a - b;             // Step 2: Subtract b from the sum to get the original value of a
    a = a - b;            // Step 3: Subtract the new b from the sum to get the original value of b

    printf("a = %d b = %d", a, b);

    getch();
}

/*
a=10 b=20
a=30 b=20
a=30 b=10
a=20 b=10
*/