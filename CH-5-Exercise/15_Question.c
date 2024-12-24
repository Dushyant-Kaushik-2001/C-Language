// Ques.15.Write a program to add all digits of a three digit number. Number is given by user. (if user enters 384, your output should be 15)

#include <stdio.h>
#include <conio.h>
int main()
{
    int x, hundreds, tens, ones, sum;

    printf("Enter a three-digit number: ");
    scanf("%d", &x);

    // Extract the digits
    hundreds = x / 100;                  // Get the hundreds place
    tens = (x / 10) % 10;               // Get the tens place
    ones = x % 10;                     // Get the ones place

    sum = hundreds + tens + ones;

    printf("The sum of all digits is: %d", sum);

    getch();
}
