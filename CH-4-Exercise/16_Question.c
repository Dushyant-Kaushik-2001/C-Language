// Ques.16.Write a program to calculate the simple interest.

#include <stdio.h>

int main()
{
    int p,t; 
    float r,si;

    printf("Enter P,R and T:");
    scanf("%d%f%d", &p, &r, &t);

    si = (p * r * t) / 100;

    printf("The simple interest is %f", si);

    getch();
}

