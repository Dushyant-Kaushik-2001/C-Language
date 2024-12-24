// Ques.14.Write a program to input two digit number and your output should be reverse of number. (if user enters 45, your output should be 54)

#include <stdio.h>
#include <conio.h>
int main()
{
    int x, tens, ones, reversed;

    printf("Enter a two-digit number: ");
    scanf("%d", &x);

    tens = x / 10; // Get the tens place
    ones = x % 10; // Get the ones place

    reversed = (ones * 10) + tens; // Reverse the number

    printf("The reversed number is: %d", reversed);

    getch();
}
