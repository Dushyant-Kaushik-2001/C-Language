// Ques.12.Write a program to print the first N natural numbers.  

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i = 1;                                                                  // Initialization
    printf("Enter the number of natural numbers to print: ");
    scanf("%d", &n);
    while (i <= n)                                                            // Condition
    {
        printf("%d\n", i);                                                  // Print statement
        i++;                                                               // Increment to avoid infinite loop
    }

    getch();
}



/*
***********************************************************Alternate Solution*********************************************************************

#include <stdio.h>
#include <conio.h>
int main() 
{
    int N, i;

    printf("Enter the number of natural numbers to print:");                          // Prompt to take input from user
    scanf("%d", &N);                                                                 // User se N ka value lena

    for (i = 1; i <= N; i++) 
    {
        printf("%d\n", i);                                                              // Print the current value of i
    }

    getch();
}




*/