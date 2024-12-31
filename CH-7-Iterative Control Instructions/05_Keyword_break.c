/*
-------------------------------------------------------------Keyword break-------------------------------------------------------------------

break keyword C programming mein ek control statement hai jo loop ya switch statement ko turant terminate karne ke liye use hota hai.
Jab break execute hota hai, toh program control directly loop ya switch block ke baad ke code par chala jata hai.
break loop ko beech mein hi terminate kar deta hai, chahe loop ki condition true ho.

1. break is a keyword
2. It can only be used either in the body of loop or in the body of switch.
3. The keyword break is used in the body of loop to terminate execution of loop before completion of its normal life.
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
For example Hume ek program banana hai jo user se ek number input le, jo ek even number hona chahiye.
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
    while (i <= 3)
    {
        printf("Enter an even number:");
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            printf("You Win");
            break;
        }
        i++;
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
4. In the above program, humne ek variable i use kiya hai jo 1 se initialize kiya gaya hai.
5. Control uske baad while statement par aata hai. Condition i <= 3 ka matlab hai ‘1 less than or equal to 3’, jo true hai.
6. Control ab while block mein enter karta hai aur pehli baar "Enter an even number" print karta hai.
7. User ek number input karta hai, maan lijiye 5. Control ab if statement par chala jata hai. Condition x % 2 == 0 false hai. 
Control simply if block ko skip kar deta hai.
8. Control ab while block ke end par pahuchta hai. Wahan se phir se while condition i <= 3` par jata hai. 
Ab i ki value change hone ki wajah se condition ‘2 less than or equal to 3’ padhte hain.
9. Isi tarah control move karta rahega. Ek point par i ki value 3 ho jayegi aur "Enter an even number" teesri baar print karega. 
Phir i ki value 4 ho jayegi. Control while block ke end tak pahuchta hai aur wahan se dobara i <= 3 condition par jata hai. 
Ab condition ‘4 is less than or equal to 3’ false hai.
10. Control simply while loop ko skip kar deta hai.
11. Dhyan dein ki condition 4 baar check hoti hai (3 baar true, 1 baar false).
12. i++; ek important step hai, warna loop kabhi khatam nahi hoga (infinite loop ban jayega).
13. Initialization (i = 1), condition (i <= 3) aur flow (i++) yeh logical constructs hain jo loop ke iterations ko control karte hain.


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


*/