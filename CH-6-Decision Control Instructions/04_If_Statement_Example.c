// Example 1 : Write a program to print Hello if 3 is greater than 4.

#include <stdio.h>
int Example1()
{
    printf("Hello");
    if (3 > 4)
    {
        printf("Bye");
    }
    return 0;
}


// Example 2 : Write a program to print Hello if 3 is less than 4.

#include <stdio.h>
int Example2()
{
    printf("Hello");
 if(3<4)
    {
    printf("Bye");
    }
 return 0;
}


// Example 3 : Write a program to check whether a number is positive or non positive.

#include <stdio.h>
int Example3()
{ 
int a;
    printf("Enter a Number:");
    scanf("%d",&a);
 if(a>0)                                // if mein hume arithmetic instruction hi likhni hai english nhi kyunki compiler arithmetic instruction samjta hai english nhi
    {                                  // zero is a neutral number. Zero na to positive hota hai na negative Zero hota hai Non Positive
    printf("Positive");
    }
 if(a<=0)
    {
    printf("Non Positive");
    }
 return 0;
}


// Example 4 : Write a program to check whether pass or fail on the basis of marks provided by user. 

#include <stdio.h>
int Example4()
{
    int marks;
    printf("Enter marks:");
    scanf("%d", &marks);
    if (marks >= 33)                                 // if mein hume arithmetic instruction hi likhni hai english nhi kyunki compiler arithmetic instruction samjta hai english nhi
    {
        printf("You are PASS");
    }
    if (marks < 33)
    {
        printf("You are FAIL");
    }
    return 0;
}

/*
Explanation: 
1. In this program output depends on the value given by user. 
2. Variable marks hold the value entered by user 
3. In the first if statement, the condition is marks>=33, thus if the marks is greater than or equal to 33 
condition becomes TRUE and if block is executed, otherwise if block is skipped. 
4. Whatever may the result of first if condition, control has to reach second if statement. 
5. If marks is less than 33 condition is TRUE and execute if block, otherwise if block is skipped. 

NOTE: Example 4 mein kitne decleartion statement hai aur kitne action statement?
Declaration Statement = 1
Action Statement = 5                
Hume ismein 8 action statement lg sakte hain lekin nhi kyunki if statements pure ek ek hi count honge.
*/