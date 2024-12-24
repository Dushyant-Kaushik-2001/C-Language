// Ques.5. Write a program to check even or odd without modulus and bitwise operator?

#include <stdio.h>
#include <conio.h>
int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x / 2 * 2 == x)
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }

    getch();
}


