// Ques.11. Write a program to check whether a given year is a leap year or not.

#include <stdio.h>
#include <conio.h>
int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a leap year.", year);
    }
    else
    {
        printf("%d is not a leap year.", year);
    }

    getch();
}

/*

Explanation:
Leap Year Rules:
1.A year is a leap year if it is divisible by 4 and not divisible by 100, or divisible by 400.
2.For example:
(a)2000 is a leap year (divisible by 400).
(b)1900 is not a leap year (divisible by 100 but not by 400).
(c)2024 is a leap year (divisible by 4 but not by 100).

Logic:
1.(year % 4 == 0 && year % 100 != 0) checks the first rule.
2.(year % 400 == 0) checks the second rule.
3.If either condition is true, it’s a leap year.



















*/





