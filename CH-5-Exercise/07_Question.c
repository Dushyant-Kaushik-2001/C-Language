// Ques.7. Write a program to swap values of two int variables.

#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;

    printf("Enter Two numbers: ");
    scanf("%d%d", &a, &b);

    c = a;
    a = b;
    b = c;

    printf("a = %d b = %d ", a, b);

    getch();
}

