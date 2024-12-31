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

/*
Explaination:

1. User se ek character input liya jaata hai.
2. Conditions use karke character ke type ko check kiya jaata hai:
3. if (ch >= 'A' && ch <= 'Z'): Check karta hai ki character uppercase alphabet hai.
4. else if (ch >= 'a' && ch <= 'z'): Check karta hai ki character lowercase alphabet hai.
5. else if (ch >= '0' && ch <= '9'): Check karta hai ki character ek digit hai.
6. Agar upar wale cases satisfy nahi hote, toh character ek special character hota hai.
7. Result print karta hai.

*/