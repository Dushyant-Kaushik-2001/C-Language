/*
-------------------------------------------------while loop-------------------------------------------------------

Following is the syntax of while loop: 
...
while(some condition)
{

       statement1;
       statement2;
       ...
}
...

1.while is a keyword. 
2.It looks like if statement but different on one thing, control comes back to while after reaching end of while 
block. 
3.while block is set of statements bounded by pair of curly braces and present immediately after the while
(some condition). 
4.Parenthesis followed by while keyword can never be empty. 
5.There is no semicolon after while (condition), because while statement is not terminating there. 
6.Whatever we have written in parenthesis is evaluated as true or false. 
7.If the condition in the parenthesis is false, control simply skipped while block. 
8.If the condition in the parenthesis is true, control enters in while block and execute statements present in 
the while block. When control reaches at the end of while block it again goes back to while keyword and recheck 
the condition written in the parenthesis.
9.If the condition in the parenthesis is again true, control again enters in while block. This keeps on going 
until condition becomes false. 
10.We can say while loop as entry control loop, because control can enter in the while block only after checking 
the condition. 
11.We want to control the iteration, for which we have to make condition in such a way that it changes on 
iterations. 

EXAMPLE:
Assume, We want to print mysirg five times on the screen. We can do it either by writing printf five times or by 
using loop. Loop is the smarter approach. It reduces our efforts of writing printf multiple times. 
We can write printf only once and iterate it for five times. 

#include<stdio.h>
int main()
{
  int i=1;                           // Initialization
  while(i<=5)                       // condition
  {
     printf("mysirg\n");
     i++;                           // Flow
  }
return 0;
}

1.In the above program, we have used variable i, which is initialized by 1. 

2.Control then comes to while statement. Condition i<=5 should be read as ‘1 less than or equal to 5’, 
which is true. Control enters into the while block, printing mysirg for the first time. On 6th line i++; 
the value of I is increased to 2. Control reaches to the end of while block. From there it again moves to 
while’s condition i<=5, but due to the change in value of i, we now read it as ‘2 less than or equal to 5’.

3.Keep moving control in this way, at one point of time, value of i becomes 5 and ‘mysirg’ is printed for the 
5th time, then i is incremented to 6. Control reaches at the end of while block and from there it goes again to 
the condition i<=5; read it as ‘6 is less than or equal to 5’, which is false. 
Control simply skipped the while’s body. 

4.Notice that the condition is checked for 6 times (5 times true, 1 time false). 

5.i++; is an important step, otherwise looping never ends. 

6.Initialization (i=1), condition (i<=5) and flow (i++) are logical constructs to control the 
number of iteration.















































































*/