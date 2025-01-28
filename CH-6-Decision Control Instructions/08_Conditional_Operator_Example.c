// Example 1 : Write a program to check whether a number is positive or not.

#include <stdio.h>
int Example1()
{
    int x;
    printf("Enter a Number:");
    scanf("%d", &x);
    x > 0 ? printf("Positive") : printf("Non Positive");           // printf(x>0 ?"Positive" :"Non Positive"); ise ase bhi likh sakte hain
    return 0;
}


// Example 2 : Write a program to find greater between two numbers.

#include <stdio.h>
int Example2()
{
    int x, y;
    printf("Enter two Numbers:");
    scanf("%d%d", &x, &y);
    x > y ? printf("%d is greater", x) : printf("%d is greater", y);
    return 0;
}


// NOTE = Conditional Operator ka ek aur usage hai selective assignment Let see :
// Example 3 : Write a program to find greater between two numbers.

#include <stdio.h>
int Example3()
{
    int x, y, max;
    printf("Enter two Numbers:");
    scanf("%d%d", &x, &y);

    max = x > y ? x : y;
    printf("Greater number is %d", max);
    return 0;
}
