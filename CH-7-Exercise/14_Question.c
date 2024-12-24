// Ques.14.Write a program to print the first N natural numbers in reverse order.

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



/*
#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter a number");
    scanf("%d", &n);
    while (i >= 1)
    {
        printf("%d\n", i);
        i=n;
        i--;
    }

    return 0;
}

*/















































