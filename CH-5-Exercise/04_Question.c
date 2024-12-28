//Ques.4.Write a program to find first digit of a given three digit number.

#include <stdio.h>
#include <conio.h>
int main()
{
    int x, firstDigit;

    printf("Enter a three-digit number: ");
    scanf("%d", &x);

    firstDigit = x / 100;

    printf("The first digit of a given three digit number is %d", firstDigit);

    getch();
}
