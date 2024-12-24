// Ques.16. Write a program to calculate the average of three numbers

#include <stdio.h>
#include <conio.h>
int main()
{
    int x, y, z, average;

    printf("Enter the first number: ");
    scanf("%d", &x);

    printf("Enter the second number: ");
    scanf("%d", &y);

    printf("Enter the third number: ");
    scanf("%d", &z);

    average = (x + y + z) / 3;

    printf("The average of %d, %d, and %d is %d", x, y, z, average);

    getch();
}
