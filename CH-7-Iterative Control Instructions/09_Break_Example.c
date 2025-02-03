// Example 1: break in while Loop
#include <stdio.h>
int example1()
{
    int i = 1;

    while (i <= 5)
    {
        if (i == 4)
        {
            break;                                   // Loop yahan ruk jayega
        }
        printf("%d\n", i);
        i++;
    }
    return 0;
}
// 👉 Jaise hi i == 4 hua, break ne loop ko exit kar diya.

// Example 2: break in for Loop
int example2()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            break;                                 // Loop yahan ruk jayega
        }
        printf("%d\n", i);
    }
    return 0;
}
// 👉 Jaise hi i == 3 hua, break ne loop exit kar diya.

/*
Example 3:
we have to make a program to take input a number from user, which should be an even number.
We give at the most three chances to the user to input correct value. It is like a game where user has three chances.
If user entered an even number the game is in his pocket (win the game) otherwise he loses the game.
Suppose user inputs an even number in the first chance, then no more chances are needed as he already wins the game.
So we have to use break keyword to terminate the iterations.
Simple Explanation:
1. User ko maximum 3 chances milenge even number dalne ke liye.
2. Agar user even number dalta hai, to game jeet jaayega aur loop turant break ho jaayega.
3. Agar odd number dalta hai, to chances kam ho jaayenge.
4. chances ke baad bhi even number nahi mila, to game haar jaayega.

*/
int example3()
{
    int x, i = 1;                            // x = num entered by user and i = chance number

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

    return 0;
}

/*
Explanation:
1. In the above example, humne break keyword ko if statement ke andar use kiya hai.
2. Humne break ko if statement ke andar rakha hai kyunki hume ye tabhi execute karna hai jab user ka input 2 se completely divisible ho (i.e., even number ho).
3. Hum break ko loop body ke bahar nahi use kar sakte.
4. Agar user 3 attempts mein bhi even number nahi deta, toh loop terminate ho jayega aur program control loop ke baad wale statement par chala jayega.
*/

// Example 4: Using break in a Nested Loop
int example4()
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

    return 0;
}
// Explanation: break sirf inner loop ko terminate karta hai, outer loop chalna continue karta hai.


// Example 4: break in an Infinite Loop
int example5()
{
    int count = 1;

    while (1)
    {                                                                                     // Infinite loop
        printf("Count: %d\n", count);
        if (count == 5)
        {
            break;                                                                     // Loop terminate ho jayega
        }
        count++;
    }

    printf("Loop exited.");
    return 0;
}

