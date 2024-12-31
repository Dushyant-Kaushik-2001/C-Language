/*
--------------------------------------------------------do while loop-------------------------------------------------------------------------

Following is the syntax of do while loop:
...
do
{

       statement1;
       statement2;
       ...
}while(some condition)
...

do-while loop C programming mein ek special type ka loop hai jo pehle code block ko execute karta hai aur phir condition check karta hai.
Iska matlab hai ki loop ka code block kam se kam ek baar zarur execute hota hai, chahe condition false hi kyu na ho.

1. do and while are keywords.
2. do while is exit control loop.
3. Since while(condition) is written at the end of the statement, it is followed by a semicolon as a mark of termination of the statement.
4. Control when reaches ‘do’ keyword, it simply enters into the do-while block. Where it executes statements and then reaches to the end
of block. Just after the block while(condition) is encountered. Where condition is evaluated either as true or false.
If it is true, control moves back to the keyword ‘do’ and repetition begins.
If condition is false, it simply move forward to the next statement of the program.
5. In do while loop, even if the condition is false for the first time, then also control is able to visit do while block once.
This is why it is called exit control loop.
6. Do while loop guarantees running of code at least once.

EXAMPLE:
Previous program of printing ‘mysirg’ 5 times on the screen can be rewritten using do while loop as:
*/

#include <stdio.h>
int main()
{
  int i = 1;                                     // Initialization
  do
  {
    printf("mysirg\n");
    i++;                                       // Flow
  } while (i <= 5);                           // condition

  return 0;
}

/*

Explanation:
1. Dry run above program to figure out the difference between working of while and do while loop.

2. One difference we can notice that in do while loop condition is checked for 5 times (in the above program).
First four times it is true then 5th time it is false.
First time condition i<=5 should be read as ‘2 less than or equal to 5’.
The value of i is 2 because it control already visited do while block before condition checking.
On the other hand, in while loop condition is checked for 6 times.

**********************************************************Key Points*********************************************************************

1. Guaranteed Execution: do-while loop mein code block ek baar zarur execute hota hai, chahe condition false ho.

2. Condition Last Mein Check Hoti Hai: Yeh while loop ke ulta hai, jisme pehle condition check hoti hai.

3. Infinite loop ke case mein, condition ko properly handle karna zaroori hai.



*/