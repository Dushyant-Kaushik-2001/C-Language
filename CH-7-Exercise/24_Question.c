//Ques.24.Write a program to calculate sum of squares of first N natural numbers. 

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i * i;                                                                                // Add current number to sum
    }

    printf("The sum of squares of first %d natural numbers is: %d\n", n, sum);

    getch();
}
