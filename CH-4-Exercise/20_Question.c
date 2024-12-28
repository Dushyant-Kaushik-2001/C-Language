// Ques.20.Write a C program to print character stored in a char variable, also print its ASCII code.

#include <stdio.h>
#include <conio.h>
int main()
{
    char x = 'A';                                    // Character variable

    printf("Character: '%c'\n", x);
    printf("The ASCII code of '%c' is: %d", x, x);
    getch();
}
