//Ques.16. Write a program to print the first N even natural numbers. 

#include <stdio.h>
#include <conio.h>
int main()
{
    int N, i = 1;                                                             // Initialization
    printf("Enter the number of even natural numbers to print: ");
    scanf("%d", &N);
    while (i <= N)                                                              // Condition
    {
        printf("%d\n", 2 * i);                                             // Print statement
        i++;                                                               // Increment to avoid infinite loop
    }

    getch();
}