// Example 1 : Write a program to check whether a number is positive or not.

#include <stdio.h>
int Example1()
{
    int x;
    printf("Enter a Number:");
    scanf("%d", &x);
    if (x > 0) // if mein hume arithmetic instruction hi likhni hai english nhi kyunki compiler arithmetic instruction samjta hai english nhi
    {
        printf("Positive Number");
    }
    else
    {
        printf("Non Positive Number");
    }
    return 0;
}

/* NOTE = Example 1 mein kitne decleartion statement hai aur kitne action statement?
Declaration Statement = 1
Action Statement = 4
ismein 8 action statement nhi hai kyunki if statement pura ek hi count hoga. */


// Example 2 : Write a program to check whether pass or fail on the basis of marks provided by user.

#include <stdio.h>
int Example2()
{
    int marks;
    printf("Enter marks:");
    scanf("%d", &marks);
    if (marks >= 33)
    {
        printf("You are PASS");
    }
    else
    {
        printf("You are FAIL");
    }
    return 0;
}

/* Explaination of Program:
1. In the above program, user entered a number, which we have taken in variable marks.
2. At line number 6, if’s condition is evaluated either as true or false, depending on the value stored in marks.
3. If the value of marks is greater than or equal to 33, then the condition is true and “You are PASS” is printed on the screen.
4. If the value of marks is lesser than 33, the condition becomes false, and control jumps to the else block,
hence “You are FAIL” gets printed. */


// Example 3 : Following code is rewrite of previous program (not using curly braces for the body of if and else block):

#include <stdio.h>
int Example3()
{
    int marks;
    printf("Enter marks:");
    scanf("%d", &marks);
    if (marks >= 33)
        printf("You are PASS");
    else
        printf("You are FAIL");
    return 0;
}

