/*
---------------------------------------------------Nested if else-------------------------------------------------------------------------

Ek if ke andar doosra if hota hai aur ek else ke andar doosra else.
Following is a program to find greater among three numbers. Notice the nested if else used in the program:
*/

#include<stdio.h>
 int main()
{
    int a, b, c;
    printf("Enter Three Numbers:");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
            printf("%d is greater", a);
        else
            printf("%d is greater", c);
    }
    else
    {
        if (b > c)
            printf("%d is greater", b);
        else
            printf("%d is greater", c);
    }
    return 0;
}
/*
1.Since, if-else statement is considered as a single action statement, thus we can remove curly braces used to mention the body of if block and else block. 

2. First condition a>b is evaluated, if it is true then control moves inside the if block and check for another condition a>c. 

3. Similarly if the condition a>b is evaluated as false, then control jumps to the else block and check for another condition b>c. 
*/


// Conditional operator mein bhi nesting kar sakte hain:
// Method 1:

#include<stdio.h>
 int Example2()
{
    int a, b, c;
    printf("Enter Three Numbers:");
    scanf("%d%d%d", &a, &b, &c);

    a > b?a > c?printf("%d is greater", a) : printf("%d is greater", c):b > c?printf("%d is greater", b) : printf("%d is greater", c);
    
    
    return 0;
}

// Method 2: 

#include<stdio.h>
 int Example3()
{
    int a, b, c;
    printf("Enter Three Numbers:");
    scanf("%d%d%d", &a, &b, &c);

        printf("%d",a>b?a>c?a:c:b>c?b:c);
    
    return 0;
}
