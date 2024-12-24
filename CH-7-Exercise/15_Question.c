//Ques.15.Write a program to print the first N even natural numbers.

#include <stdio.h>

int main()
{
    int n, i=1;
    printf("Enter a number");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d\n", n + 1 - i);
        i++;
    }

    return 0;
}
