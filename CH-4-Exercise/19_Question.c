// Ques.19.Write a program which takes a character as input and print its ASCII code.

#include <stdio.h>
#include <conio.h>
int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    printf("The ASCII code of '%c' is %d", c, c);

    getch();
}

/*
%d displays the integer value of a character.
%c displays the actual character.
*/
