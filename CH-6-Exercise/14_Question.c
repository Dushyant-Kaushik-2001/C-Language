// Ques.14. Write a program to check whether a given year is a leap year or not.

#include <stdio.h>
#include <conio.h>
int main()
{
    int x;

    printf("Enter a year: ");
    scanf("%d", &x);

    if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
    {
        printf("%d is a leap year.", x);
    }
    else
    {
        printf("%d is not a leap year.", x);
    }

    getch();
}

/*
Ques. What is Leap Year?
Ans.Leap Year ek aisa year hota hai jisme February mahine mein 29 din hote hain, aur poore saal mein 366 din. 
Normal years mein February ke sirf 28 din hote hain aur saal ke total din 365 hote hain.

Leap Year Ka Rule:
Ek year leap year tab hota hai jab
1. Year 4 se completely divisible ho (i.e., year % 4 == 0).
2. Lekin agar year 100 se divisible ho, to leap year tab hoga jab wo 400 se bhi divisible ho.

Formula:
1. Agar (year % 4 == 0) ho aur (year % 100 != 0) ho, to leap year hai.
2. Ya agar (year % 400 == 0) ho, to bhi leap year hai

Examples:

(A).Leap Years:
2000 (400 se divisible hai)
2024 (4 se divisible hai aur 100 se nahi)
2400 (400 se divisible hai)

(B). Non-Leap Years:
1900 (100 se divisible hai, lekin 400 se nahi)
2023 (4 se divisible nahi hai)
2100 (100 se divisible hai, lekin 400 se nahi)

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





