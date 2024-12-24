// Ques.2.Write a program to print user input number with the last digit lost. (if user enters 237, your output should be 23. If user inputs 4, your output should be 0)

#include <stdio.h>
#include <conio.h>
int main()
{
    int x, y;

    printf("Enter a number: ");
    scanf("%d", &x);

    // Remove the last digit by integer division
    y = x / 10;

    printf("The number without the last digit is: %d", y);

    getch();
}
