/*
-------------------------------------------------------------for loop-----------------------------------------------------------------------

Following is the syntax of for loop:
...
for(initialization; condition; flow)
{

       statement1;
       statement2;
       ...
}
...

for loop C programming mein ek aur iteration loop hai jo ek block of code ko tab tak execute karta hai jab tak ek specific condition 
satisfy hoti hai. Yeh loop fixed number of iterations ke liye best hota hai, jab hume pata hota hai ki loop kitni baar chalega.

1. for is a keyword 
2. The most appealing feature of for loop is its format which is capable to provide place three basic logical constructs to control 
looping, initialization, condition and flow at one place. 
3. In the for’s parenthesis, exactly two semicolons are mandatory. 
4. Whatever written before the first semicolon is executed first, then control moves to condition part, which is written between the 
semicolons. Condition is evaluated as true or false. If it is false, control simply skipped for’s block. If the condition is true control 
enters into the for’s block. After executing statements residing in the for’s block, control jumps up to the flow section, which is 
written after the second semicolon in the parenthesis. Control again moves to the condition part and process repeats. 
5. The for loop is also an entry control loop.


EXAMPLE:
Following is the same program of printing mysirg five times on the screen but with the for loop.
*/

#include<stdio.h>
int main()
{
  int i=1;                            // Initialization
  for(i=1;i<=5;i++)                  // Flow  // condition        
  {
     printf("mysirg\n");
  }               

return 0;
}

/*
Explanation:
  
1. In the above program, we have used variable i, which is initialized by 1.
2. Control then comes to for statement. Initialization i=1 is executed first.
3. Control then moves to condition i<=5, which is true. Control enters into the for block, printing mysirg for the first time.
4. After executing the statement, control moves to flow i++. The value of i is increased to 2.
5. Control reaches to the end of for block. From there it again moves to condition i<=5, but due to the change in value of i,
we now read it as ‘2 less than or equal to 5’.
6. Keep moving control in this way, at one point of time, value of i becomes 5 and ‘mysirg’ is printed for the 5th time, then i is incremented to 6.
Control reaches at the end of for block and from there it goes again to the condition i<=5; read it as ‘6 is less than or equal to 5’, which is false.
Control simply skipped the for’s body.
7. Notice that the condition is checked for 6 times (5 times true, 1 time false).
8. i++; is an important step, otherwise looping never ends.
9. Initialization (i=1), condition (i<=5) and flow (i++) are logical constructs to control the number of iteration.
10. We can say for loop as entry control loop, because control can enter in the for block only after checking the condition.
11. We want to control the iteration, for which we have to make condition in such a way that it changes on iterations.

**************************************************************Key Points*********************************************************************

1. Initialization, Condition, and Update = Yeh tino statements ek hi jagah likhi jaati hain.

2. Best for Fixed Iterations = Jab loop iterations ka number fixed ho, for loop ideal hai.

3. Nested Loops = for loop ko doosre loops ke andar use kar sakte hain for complex operations.

4. Infinite Loop = Agar condition kabhi false nahi hoti, toh infinite loop ban sakta hai.

5. for loop mein initialization, condition aur flow ka dhyan rakhna zaroori hai, warna infinite loop ban sakta hai.

6. Loop ko terminate karne ke liye condition ka false hona zaroori hai.



*/