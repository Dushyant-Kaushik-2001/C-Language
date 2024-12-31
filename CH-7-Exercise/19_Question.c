//Ques.19. Write a program to print cubes of the first N natural numbers.

#include <stdio.h>
#include <conio.h>
int main()
{
    int N, i = 1;                                                             // Initialization
    printf("Enter the number of natural numbers to print cubes: ");
    scanf("%d", &N);
    while (i <= N)                                                              // Condition
    {
        printf("%d\n", i * i * i);                                             // Print statement
        i++;                                                               // Increment to avoid infinite loop
    }

    getch();
}
