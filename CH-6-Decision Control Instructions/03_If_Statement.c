/*
-----------------------------------------------------------if statement------------------------------------------------------------------------

include <stdio.h>
int main()
{
    ------------------------
    ------------------------
    if(some condition)
    {
        statemtnt1;
        statement2;
        ----------
    }
return 0;
}

1. if is a keyword which let compiler know the decision control statement begins.  
2. Immediately after if keyword some condition is there in the parenthesis. 
3. Condition can be any valid expression in C language.  
4. Condition is always evaluated as true or false.  
5. If the result of expression is non-zero it is considered as TRUE otherwise FALSE. 
6. Immediately after this condition there is a block of code. This block is known as if block. 
7. Whatever we write in if block will be execute only when condition is TRUE. 
8. When condition is false control skip if block and execute statements written after if block.

Example 1:

include <stdio.h>
int main()
{
    printf("Hello");
 if(3>4)
    {
    printf("Bye");
    }
 return 0;
}

Output:
Hello


Example 2:

include <stdio.h>
int main()
{
    printf("Hello");
 if(3<4)
    {
    printf("Bye");
    }
 return 0;
}

Output:
HelloBye


Example 3 : Write a program to check whether a number is positive or not.

include <stdio.h>
int main()
{ 
int x;
    printf("Enter a Number:");
    scanf("%d",&x);
 if(x>0)                                // if mein hume arithmetic instruction hi likhni hai english nhi kyunki compiler arithmetic instruction samjta hai english nhi
    {                                   // zero is a neutral number na positive na negative Zero hota hai Non Positive
    printf("Positive");
    }
 if(x<=0)
    {
    printf("Non Positive");
    }
 return 0;
}

Output:
Enter a Number:34
Positive 
OR
Enter a Number:-23
Non Positive 


NOTE = Example 3 mein kitne decleartion statement hai aur kitne action statement?
Declaration Statement = 1
Action Statement = 5                
Hume ismein 8 action statement lg sakte hain lekin nhi  kyunki if statement pura ek hi count hota hai.      


Example 4: +Write a program to check whether pass or fail on the basis of marks provided by user.

include <stdio.h>
int main()
{ 
int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
 if(marks>=33)                                  // if mein hume arithmetic instruction hi likhni hai english nhi kyunki compiler arithmetic instruction samjta hai english nhi
    {
    printf("You are PASS");
    }
 if(marks<33)
    {
    printf("You are FAIL");
    }
 return 0;
}

Output:
Enter marks:23
You are FAIL

Explanation: 
1. In this program output depends on the value given by user. 
2. Variable marks hold the value entered by user 
3. In the first if statement, the condition is marks>=33, thus if the marks is greater than or equal to 33 
condition becomes TRUE and if block is executed, otherwise if block is skipped. 
4. Whatever may the result of first if condition, control has to reach second if statement. 
5. If marks is less than 33 condition is TRUE and execute if block, otherwise if block is skipped. 






















































































*/