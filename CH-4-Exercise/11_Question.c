// Ques.11. Write  a program to calculate the sum of two numbers.

#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;                                // Yha teen variable kyu banaye kyunki do mein to variable rakhenge aur teesre mein sum
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);

    c = a + b;

    printf("Sum is %d", c);
    getch();
}

/*
How to Think Steps?

1. Imagine and Design Output (what we want).

2. Design Steps to Perform.

3. Write some code, dry run it again and again till it becomes the desired code.
*/