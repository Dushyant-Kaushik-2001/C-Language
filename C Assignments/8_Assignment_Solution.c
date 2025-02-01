#include <stdio.h>
// Ques.1.Write a program to check whether a given number is a three-digit number or not.
int q1()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x >= 100 && x <= 999)
    {
        printf("%d is a three digit number", x);
    }
    else
    {
        printf("%d is not a three digit number", x);
    }

    return 0;
}
// Ques.2. Write a program to print greater between two numbers. Print one number if both are the same.
int q2()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    if (x > y)
    {
        printf("%d", x);
    }
    else
    {
        printf("%d", y);
    }

    return 0;
}
// Ques.3.Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots.
int q3()
{
    int a, b, c, d;
    printf("Enter values of a, b, c in quadratic equation:");
    scanf("%d%d%d", &a, &b, &c);

    d = b * b - 4 * a * c;
    if (d > 0)
    {
        printf("Roots are real and distinct");
    }
    else if (d == 0)
    {
        printf("Roots are real and equal");
    }
    else
    {
        printf("Roots are imaginary");
    }
    return 0;
}
// Ques.4. Write a program to check whether a given year is a leap year or not.
int q4()
{
    int year;
    printf("Enter year number");
    scanf("%d", &year);
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
            printf("Leap Year");
        else
            printf("Non Leap Year");
    }
    else
    {
        if (year % 4 == 0)
            printf("Leap Year");
        else
            printf("Non Leap Year");
    }
    return 0;
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
// Ques.5.Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
int q5()
{
    int a, b, c;
    printf("Enter three numbers:");
    scanf("%d%d%d", &a, &b, &c);
    printf("%d", a > b ? a > c ? a : c : b > c ? b: c);

    return 0;
}
// Alternate Programs:
int q6()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
            printf("%d", a);
        else
            printf("%d", c);  
    }

    else
    {
        if (b > c)
            printf("%d", b);
        else

            printf("%d", c);
    }
    return 0;
}
int q7()
{
    int a, b, c,k;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a,&b,&c);

    if (a > b && a > c)
    {
        k = a;
    }
    else if (b > c)
    {
        k = b;
    }
    else
    {
        k = c;
    }
    printf("Greater number is: %d",k);

    return 0;
}