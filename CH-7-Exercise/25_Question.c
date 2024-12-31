//Ques.25. Write a program to calculate sum of cubes of first N natural numbers. 

#include <stdio.h>
#include <conio.h>
int main()
{
    int N, i, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        sum = sum + i * i * i;                                                       // Add current number to sum
    }

    printf("The sum of cubes of first %d natural numbers is: %d\n", N, sum);

    getch();
}
