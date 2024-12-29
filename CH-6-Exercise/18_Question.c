// Ques.18. Write a program to check whether a given alphabet is in uppercase or lowercase.

#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;

    printf("Enter a letter: ");
    scanf("%c", &ch);

    
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is a uppercase letter", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is a lowercase letter", ch);
    }
    else
    {
        printf("Not a valid letter");
    }

    getch();
}
