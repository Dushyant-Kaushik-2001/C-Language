//Ques.17.. Write a program to print the first N even natural numbers in reverse order. 

#include <stdio.h>
#include <conio.h>
int main()
{
    int N, i;

    printf("Enter the number of even natural numbers to print in reverse order:");
    scanf("%d", &N);

    i = 2 * N;                                              // Start from N
    while (i >= 2)                                         // Loop will run until i is greater than or equal to 2
    {
        printf("%d\n", i);                                  // Print the current value of i
        i = i - 2;                                          // Decrement i by 2 to move to the next even number in reverse order
    }

    getch();
}
