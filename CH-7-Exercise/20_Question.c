//Ques.20.Write a program to print a table of N.

#include <stdio.h>
#include <conio.h>
int main()
{
    int N, i = 1;                                                             // Initialization
    printf("Enter the number to print the table: ");
    scanf("%d", &N);
    while (i <= 10)                                                              // Condition
    {
        printf("%d * %d = %d\n", N, i, N * i);                              // Print statement
        i++;                                                               // Increment to avoid infinite loop
    }

    getch();
}