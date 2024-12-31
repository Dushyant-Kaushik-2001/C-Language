//Ques.26.Write a program to calculate factorial of a number.  

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, fact = 1;

    printf("Enter the number to calculate factorial: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;                                                             // Multiply current number to factorial
    }

    printf("The factorial of %d is: %d\n", n, fact);

    getch();
}
