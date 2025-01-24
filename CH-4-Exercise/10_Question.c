// Ques.10.Write a C program to calculate the square of a given number.

#include <stdio.h>

int main()
{
    int x, square;

    printf("Enter a number: ");
    scanf("%d", &x);

    square = x * x;

    printf("The square of %d is %d", x, square);

    return 0;
}
