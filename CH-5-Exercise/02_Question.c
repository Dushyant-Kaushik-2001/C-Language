//Ques.2.Write a program to print or find the last digit of a given number?

#include <stdio.h>
#include <conio.h>
int main()
{
    int x, lastdigit;

    printf("Enter a number ");                                                   // %10 krne se Remainder aata hai
    scanf("%d", &x);

    lastdigit = x % 10;                       // x ko modulus krenge % 10 ke saath to aa jaayega remainder aur remainder last digit hi hoga

    printf("The last digit of number is %d", lastdigit);

    getch();
}
