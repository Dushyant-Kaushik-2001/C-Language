#include <stdio.h>
// Ques.1. Write a program to check whether a given number is positive, negative or zero.
int q1()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x > 0)
    {
        printf("The number is positive");
    }
    else if (x < 0)
    {
        printf("The number is negative");
    }
    else
    {
        printf("The number is zero");
    }

    return 0;
}
// Ques.2.Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
int q2()
{
    char x;
    printf("Enter a character:");
    scanf("%c", &x);

    if (x >= 'a' && x <= 'z')
    {
        printf("Lowercase alphabet");
    }
    else if (x >= 'A' && x <= 'Z')
    {
        printf("Uppercase alphabet");
    }
    else if (x >= '0' && x <= '9')
    {
        printf("Digit");
    }
    else
        printf("special character");

    return 0;
}
// Ques.3.Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
int main()
{
    int a, b, c;
    printf("Enter lengths of sides of a traingle:");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("Valid Traingle");
    }
    else
    {
        printf("Invalid Triangle");
    }
    return 0;
}
/*
Explanation:
1. User se 3 sides (a, b, c) input lene ko bola jata hai.
2. Triangle Validity Rule:
Kisi bhi triangle ke liye, do sides ka sum third side se bada hona chahiye:
a + b > c
a + c > b
b + c > a
3. Agar ye 3 conditions satisfy hoti hain to triangle valid hai, warna invalid hai.
*/
// Ques.4.Write a program which takes the month number as an input and display number of days in that month.'
int q4()
{
    int month;
    printf("Enter Month Number");
    scanf("%d", &month);

    if (month == 2)
    {
        printf("28 or 29 days");
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf("30 days");
    }
    else if (month < 1 || month > 12)
    {
        printf("Invlaid month number");
    }
    else
    {
        printf("31 Days");
    }
    return 0;
}
int q5()
{
    int month;
    printf("Enter month number: ");
    scanf("%d", &month);

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        printf("This month has 31 days.");
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf("This month has 30 days.");
    }
    else if (month == 2)
    {
        printf("This month has 28 or 29 days.");
    }
    else
    {
        printf("Invalid month number!");
    }

    return 0;
}
