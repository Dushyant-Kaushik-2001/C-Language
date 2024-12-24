// Ques.12.Write a program to print MySirG N times on the screen.

#include <stdio.h>

int main()
{
    int n, i = 1;
    printf("Enter a number");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("MySirG\n");
        i++;
    }

    return 0;
}
