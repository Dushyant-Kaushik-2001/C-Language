/*
-------------------------------------------------------------Keyword break-------------------------------------------------------------------

C mein break keyword ka use loop ya switch case ko turant exit karne ke liye hota hai. 
Jab bhi break execute hota hai, control us loop ya switch case se baahar nikal jaata hai.

1. break is a keyword.

2. break can only be used either in the body of loop or in the body of switch.

3. In loop, break is used to terminate execution of loop before completion of its normal life.

4. Sometimes it is desired to terminate loop before its normal end.

Example 1:

#include <stdio.h>
#include <conio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break;                                                          // Loop yahan terminate ho jayega
        }
        printf("i = %d\n", i);
    }
    printf("Loop terminated.");
    getch();
}

/*
Output:
i = 1
i = 2
i = 3
i = 4
Loop terminated.

Explanation : Jab i == 5 hota hai, break loop ko terminate kar deta hai aur program control loop ke baad chala jata hai.


Example 2:
Hume ek program banana hai jo user se ek number input le, jo ek even number hona chahiye.
User ko maximum 3 chances diye jayenge sahi value input karne ke liye.
Yeh ek game ke jaisa hai jisme user ke paas sirf teen chances hain.
Agar user pehle hi chance mein even number dal deta hai, toh game user jeet jata hai aur aur chances ki zarurat nahi hoti.
Agar user 3 attempts mein bhi even number nahi deta, toh user game haar jata hai.
Is problem ko solve karne ke liye hume break keyword ka use karna hoga taaki loop iterations ko terminate kiya ja sake.
*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int x, i = 1;
    for (i = 1; i <= 3; i++)
    {
        printf("Enter an even number:");
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            printf("You Win");
            break;
        }
    }
    if (i == 4)
        printf("You Lost");
    getch();
}

/*
Explanation:

1. In the above example, humne break keyword ko if statement ke andar use kiya hai.
2. Humne break ko if statement ke andar rakha hai kyunki hume yeh tabhi execute karna hai jab user ka input 2 se completely divisible ho (i.e., even number ho).
3. Hum break ko loop body ke bahar nahi use kar sakte.
4. Agar user 3 attempts mein bhi even number nahi deta, toh loop terminate ho jayega aur program control loop ke baad wale statement par chala jayega.


Example 3: Using break in a Nested Loop

#include <stdio.h>
#include <conio.h>
int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (j == 2)
            {
                break;                                                                  // Inner loop terminate hoga
            }
            printf("i = %d, j = %d\n", i, j);
        }
    }

    getch();
}
Output:
i = 1, j = 1
i = 2, j = 1
i = 3, j = 1

Explanation: break sirf inner loop ko terminate karta hai, outer loop chalna continue karta hai.


Example 4: break in an Infinite Loop

#include <stdio.h>
#include <conio.h>
int main()
{
    int count = 1;

    while (1)
    {                                                                                 // Infinite loop
        printf("Count: %d\n", count);
        if (count == 5)
        {
            break;                                                                     // Loop terminate ho jayega
        }
        count++;
    }

    printf("Loop exited.");
    getch();
}
Output:
Count: 1
Count: 2
Count: 3
Count: 4
Count: 5
Loop exited.


**************************************************************Key Points******************************************************************

1. break ka use kisi bhi loop (e.g., for, while, do-while) ko beech mein terminate karne ke liye hota hai.

2. Agar nested loops hain, toh break sirf us loop ko terminate karega jisme break likha hai, outer loops par iska koi effect nahi hota.

3. Infinite Loops ke Liye Useful: break ka use infinite loops ko terminate karne ke liye hota hai.

✅ break se loop ya switch case turant exit kar sakte hain.
✅ Ye sirf us loop ya switch se bahar nikalta hai jisme likha hota hai.
✅ if, else, ya functions me break ka direct use nahi hota

*/