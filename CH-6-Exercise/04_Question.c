// Ques.4. Write a program to check whether a number is even or odd without using modulus(%) operator?

#include <stdio.h>
#include <conio.h>
int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x & 1)
    {
        printf("The number is odd.");
    }
    else
    {
        printf("The number is even.");
    }

    getch();
}


