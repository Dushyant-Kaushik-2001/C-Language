// Ques.13.Write a C program to calculate the average of three numbers. Numbers are taken from the User.

#include <stdio.h>
#include <conio.h>
int main()
{
    float a, b, c, average;

    printf("Enter three numbers: ");
    scanf("%f%f%f", &a, &b, &c);

    average = (a + b + c) / 3;

    printf("The average of three numbers is %f ", average);

    getch();
}
