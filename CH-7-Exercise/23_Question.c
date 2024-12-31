//Ques.23.Write a program to calculate sum of first N odd natural numbers. 

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + 2 * i - 1;                                                                  // Add current number to sum
    }

    printf("The sum of first %d odd natural numbers is: %d\n", n, sum);

    getch();
}
