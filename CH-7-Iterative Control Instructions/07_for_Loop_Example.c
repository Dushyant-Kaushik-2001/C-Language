/*
---------------------------------------------------------for LOOP EXAMPLE:---------------------------------------------------------------------

Following is the same program of printing mysirg five times on the screen but with the for loop.
*/

#include <stdio.h>
int main()
{
    int i = 1;                            // Initialization
    for (i = 1; i <= 5; i++)             // Flow  // condition
    {
        printf("mysirg\n");
    }

    return 0;
}

/*
Explanation:

1. Dry run the above code according to the rules just described. 
2. We can remove curly braces of for’s body, as it contains only one statement. 


**************************************************************Key Points*********************************************************************

✅ for is a keyword – Reserved word in C.

✅ All loop controls in one place – Initialization, condition, update ek hi line mein.

✅ Two semicolons (;) are mandatory – for(initialization; condition; update).

✅ Entry control loop – Pehle condition check hoti hai, tabhi loop execute hota hai.

✅ Execution order: Initialization → Condition → Loop Body → Update → Repeat.

✅ Can be infinite – for(;;) likhne se loop kabhi khatam nahi hoga.

✅ Faster & readable – Code chhota aur efficient hota hai.

Bas itna yaad rakho, for loop powerful hai aur easy bhi! 🚀

*/