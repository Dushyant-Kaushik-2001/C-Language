// Ques.1.Write a program to check whether a given number is positive or non-positive. 

#include <stdio.h>
#include <conio.h>
int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x > 0)
    {
        printf("The number is positive.");
    }
    else
    {
        printf("The number is non-positive.");
    }

    getch();
}















