// Ques.5.Write a program to find middle digit of a given three digit number?

#include <stdio.h>
#include <conio.h>
int main()
{
    int x, middleDigit;

    printf("Enter a three-digit number: ");
    scanf("%d", &x);

    middleDigit = (x / 10) % 10;

    printf("The middle digit of a given three digit number is %d", middleDigit);

    getch();
}