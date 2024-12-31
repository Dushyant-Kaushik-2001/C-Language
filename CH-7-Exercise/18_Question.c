//Ques.18.. Write a program to print squares of the first N natural numbers.

#include <stdio.h>
#include <conio.h>
int main()
{
    int N, i = 1;                                                             // Initialization
    printf("Enter the number of natural numbers to print squares: ");
    scanf("%d", &N);
    while (i <= N)                                                              // Condition
    {
        printf("%d\n", i * i);                                             // Print statement
        i++;                                                               // Increment to avoid infinite loop
    }

    getch();
}
