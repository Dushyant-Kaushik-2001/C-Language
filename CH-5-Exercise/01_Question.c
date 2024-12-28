//Ques.01.Write a program to print 5 greater number of user input. (if user enters 7 your output should be 12)

#include <stdio.h>
#include <conio.h>
int main()
{
    int x, y;

    printf("Enter a number: ");
    scanf("%d", &x);

        y = x + 5;

    printf(" 5 greater number is: %d", y);

    getch();
}
