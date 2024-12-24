// Ques.8. Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include <stdio.h>
#include <conio.h>
int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x % 3 == 0 && x % 2 == 0)
    {
        printf("Divisible by both 3 and 2", x);
    }
    else
    {
        printf("Not Divisible by both 3 and 2", x);
    }

    getch();
}
