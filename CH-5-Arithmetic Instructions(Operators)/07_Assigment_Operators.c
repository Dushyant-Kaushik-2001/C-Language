/*
--------------------------------------------Assignment Operator (= ,+=, -=, *=, /=, %=, &=,|=, ^=)------------------------------------------

1. Assignment operator is the most used operator in the expression. 

2. It is sometimes misinterpreted as equal to operators by beginners.

3. Assignment operator is used to assign value to the variable. 

4. It is a binary operator where left operand must be a variable. 
For Example:
x = 4;                                              // Right vaali cheez hi left mein aati hai ulta nhi hota matlab 4 = x; galat hai
In this expression value 4 is assigned to the variable x.

5. Following are invalid expressions: 
4 = x;                                       // Left operand must be a variable. 
3 = 4; 
a+3 = 5; 
  
NOTE = Agr assignment ke left hand side p variable nhi hai to Error aati hai

***********************************************Compound Assignment Operators(+=, -=, *=, /=, %=, &=, |=, ^=)**********************************

Example 1:

#include<stdio.h>
int main()
{
     int x = 5;
      x += 4;                             // Same as x = x+4 iska matlab hai x mein 4 add kro jo result aaye x mein assign kro
   printf("x = %d", x);
   return 0;
}

Output: 
x = 9 
Expression x += 4 means, x is incremented by 4.  
Similarly,  
x -= 3; is same as x = x-3; 
x *= 5; is same as x = x*5; 
x /= 7; is same as x = x/7; 
x %= 3; is same as x = x%3; 
 
NOTE:
Do not interpret that the expression x*=2+5 can be simply replaced by x=x*2+5, because there is a difference in priority. 
To understand this concept observe the following two examples 

Example 2:

#include<stdio.h>
int main()
{
     int x = 3;
      x *= 2 + 5;                            //  x = x*74
   printf("x = %d", x);
   return 0;
}

Output: 
x = 21
In the expression x*=2+5; operator + has higher priority, thus resolved as x*=7, which further results 21.

Example 3:

#include<stdio.h>
int main()
{
     int x = 3;
      x = x*2+5;                              // x = 6 + 5
   printf("x = %d", x);
   return 0;
}

Output: 
x=11
In the expression x = x*2+5; operator * has the highest priority, 
thus the expression is resolved as x = 6+5, which is further evaluated as x=11. 





*/