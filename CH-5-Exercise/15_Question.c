// Ques.15.Write a program to input two digit number and your output should be reverse of number. (if user enters 45, your output should be 54)

#include <stdio.h>
#include <conio.h>
int main()
{
    int x, reverse;

    
    printf("Enter a two-digit number: ");
    scanf("%d", &x);

    
    reverse = (x % 10) * 10 + (x / 10);

    
    printf("The reverse of the number is: %d", reverse);

    getch();
}





