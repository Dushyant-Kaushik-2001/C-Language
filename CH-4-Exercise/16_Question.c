// Ques.16.Write a program to calculate the simple interest.

#include <stdio.h>
#include <conio.h>
int main()
{
    float p, r, t, si;

    printf("Enter the principal amount: ");
    scanf("%f", &p);

    printf("Enter the annual interest rate : ");
    scanf("%f", &r);

    printf("Enter the time : ");
    scanf("%f", &t);

    si = (p * r * t) / 100;

    printf("The simple interest is %f", si);

    getch();
}

