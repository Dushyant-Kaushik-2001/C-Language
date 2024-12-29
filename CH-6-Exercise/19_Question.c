// Ques.19.Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.

#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;

    printf("Enter a letter: ");
    scanf("%c", &ch);

    
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is a uppercase alphabet", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is a lowercase alphabet", ch);
    }
    else if (ch >= '0' && ch <= '9') 
    {
        printf("%c is a digit", ch);
    }
    else
    {
        printf("%c is a special character",ch);
    }

    getch();
}