// Ques.21.Write a C program to input three characters from the user and display characters with their corresponding ASCII code.

#include <stdio.h>
#include <conio.h>
int main()
{
    char c1, c2, c3;

    printf("Enter three characters: ");
    scanf("%c %c %c", &c1, &c2, &c3);

    printf("The ASCII code of '%c' is %d\n", c1, c1);
    printf("The ASCII code of '%c' is %d\n", c2, c2);
    printf("The ASCII code of '%c' is %d", c3, c3);

    getch();
}