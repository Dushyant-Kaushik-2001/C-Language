/*
------------------------------------------------------do while Loop EXAMPLE:----------------------------------------------------------------------

Previous program of printing ‘mysirg’ 5 times on the screen can be rewritten using do while loop as:
*/

#include <stdio.h>
int main()
{
    int i = 1;                                                  // Initialization
    do
    {
        printf("mysirg\n");
        i++;                                                  // Flow
    } while (i <= 5);                                        // condition

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

Important Points:

✔️ do-while loop kam se kam ek baar toh chalta hi hai, chahe condition false ho.

✔️ Ye while loop se thoda alag hai, kyunki while loop pehle condition check karta hai.

✔️ Jab while loop ka use karte ho, toh agar condition starting me hi false ho, toh loop ek baar bhi nahi chalega.

*/