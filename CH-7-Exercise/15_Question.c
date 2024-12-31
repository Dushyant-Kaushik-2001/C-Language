// Ques.15.Write a program to print the first N odd natural numbers in reverse order.

#include <stdio.h>
#include <conio.h>
int main()
{
    int N, i;

    printf("Enter the number of odd natural numbers to print in reverse order:");
    scanf("%d", &N);

    i = 2 * N - 1;                                              // Start from N
    while (i >= 1)                                             // Loop will run until i is greater than or equal to 1
    {
        printf("%d\n", i);                                      // Print the current value of i
        i = i - 2;                                              // Decrement i by 2 to move to the next odd number in reverse order
    }

    getch();
}