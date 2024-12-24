//Ques.9. Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include <stdio.h>
#include <conio.h>
int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x % 7 == 0 || x % 3 == 0)
    {
        printf("Divisible by both 7 and 3", x);
    }
    else
    {
        printf("Not Divisible by both 7 and 3", x);
    }

    getch();
}






