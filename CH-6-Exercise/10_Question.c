// Ques.6. Write a program to check whether a given number is positive, negative or zero.

#include <stdio.h>
#include <conio.h>
int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x > 0)
    {
        printf("The number is positive");
    }
    else if(x < 0)
    {
        printf("The number is negative");
    }
    else
    {
        printf("The number is zero");
    }

    getch();
}













