/*
----------------------------------------------------------While Loop EXAMPLE:------------------------------------------------------------------

Assume, We want to print mysirg five times on the screen. We can do it either by writing printf five times or by using loop.
Loop is the smarter approach. It reduces our efforts of writing printf multiple times. We can write printf only once and iterate it for five times.
*/

#include <stdio.h>
int main()
{
  int i = 1;                           // Initialization
  while (i <= 5)                      // condition check
  {
    printf("mysirg\n");                
    i++;                              // Flow or increment
  }
  return 0;
}

/*
-Kaise Kaam Karta Hai Ye Program?

Step	                 i ki Value	                Condition (i ≤ 5)?	           Loop Execute Hoga?	                   i++ (Next Value)

Start	                   i = 1	                         1 ≤ 5(True)	           Yes, "mysirg" print	                       i = 2
2nd loop	               i = 2	                         2 ≤ 5 (True)	           Yes, "mysirg" print	                       i = 3
3rd loop	               i = 3	                         3 ≤ 5 (True)	           Yes, "mysirg" print	                       i = 4
4th loop	               i = 4	                         4 ≤ 5 (True)	           Yes, "mysirg" print	                       i = 5
5th loop	               i = 5	                         5 ≤ 5 (True)	           Yes, "mysirg" print	                       i = 6
6th check	               i = 6	                         6 ≤ 5 (False)	          ❌ No, loop stop	                            -


1. In the above program, we have used variable i, which is initialized by 1.

2. Control then comes to while statement. 
Condition i<=5 should be read as ‘1 less than or equal to 5’, which is true.
Control enters into the while block, printing mysirg for the first time. 
On 6th line i++; the value of i is increased to 2.Control reaches to the end of while block. 
From there it again moves to while’s condition i<=5, but due to the change in value of i,we now read it as ‘2 less than or equal to 5’.

3. Keep moving control in this way, at one point of time, value of i becomes 5 and ‘mysirg’ is printed for the 5th time,
then i is incremented to 6. Control reaches at the end of while block and from there it goes again to the condition i<=5;
read it as ‘6 is less than or equal to 5’, which is false.
Control simply skipped the while’s body.

4. Notice that the condition is checked for 6 times (5 times true, 1 time false).

5. i++; is an important step, otherwise looping never ends.

6. Initialization (i=1), condition (i<=5) and flow (i++) are logical constructs to control the number of iteration.


**************************************************************Key Points******************************************************************

✅ Condition har baar check hoti hai – Jab tak true hai, loop chalega.

✅ Loop 5 baar chala kyunki i ki value 1 se start hui aur 5 tak gayi.

✅ Condition 6 baar check hui – 5 baar true, 1 baar false hone ke baad loop ruk gaya.

✅ Agar i++ nahi hota, toh loop infinite ho jata! 😅

✅ Initialization (i = 1), Condition (i <= 5), aur Increment (i++) ka sahi combination banana zaroori hai.

*/