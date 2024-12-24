// Write a C program to print \n on the screen

#include<stdio.h>
#include<conio.h>
int main()
{
    printf("\\n");
    getch();
}

/*

Explanation:
1. \\: The first backslash is an escape character, so \\ prints a single backslash.

2. n: This is treated as a literal character, following the escaped backslash.

3. printf("\\n");: Prints \n literally on the screen.


*/
