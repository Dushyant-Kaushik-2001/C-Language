//Ques.22.Write a program to calculate sum of first N even natural numbers.

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + 2 * i;                                                                                // Add current number to sum
    }

    printf("The sum of first %d even natural numbers is: %d\n", n, sum);

    getch();
}
