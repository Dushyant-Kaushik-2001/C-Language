// Ques.4. Write a program to find last digit of a given number?

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

/*
Ques. How to remove last digit of a given number?
Ans.
Agr hum x % 10 krte hain to isse last digit milti hai lekin hume vo nhi chaiye usko htana hai toh hum x / 10 krenge to last digit hat jaayegi












*/