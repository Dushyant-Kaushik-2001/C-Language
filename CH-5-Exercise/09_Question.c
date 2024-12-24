// Ques.9.Write a program to make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make it x=2340)

#include <stdio.h>
#include <conio.h>
int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    // Make the last digit zero
    x = x / 10 * 10;

    printf("The number after making the last digit zero is: %d", x);

    getch();
}











