/*Ques.12. Write a program to check whether a given character is an alphabet (uppercase),an alphabet (lower case)
,a digit or a special character.
 */

#include <stdio.h>

int main()
{
    char x;

    printf("Enter a character: ");
    scanf("%c", &x);

    if (x >= 'A' && x <= 'Z')
    {
        printf("Uppercase alphabet");
    }
    else if (x >= 'a' && x <= 'z')
    {
        printf("lowercase alphabet");
    }
    else if (x >= '0' && x <= '9')
    {
        printf("Digit");
    }
    else
    {
        printf("special character");
    }

    return 0;
}















