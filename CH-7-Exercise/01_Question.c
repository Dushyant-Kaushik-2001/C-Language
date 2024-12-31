// Ques.1.Write a program to print MySirG 5 times on the screen.

#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 1;                                           // Initialization

    while (i <= 5)                                      // Condition
    {
        printf("MySirG\n");                            // Print statement
        i++;                                          // Increment to avoid infinite loop
    }

    getch();
}


/*
Explanation:
1. Initialization (i = 1): Variable i ko 1 se start karte hain.
2. Condition (i <= 5): Loop tab tak chalega jab tak i ki value 5 ya usse chhoti hogi.
3. Body (printf("MySirG\n");): "MySirG" ko har iteration mein print karta hai.
4. Increment (i++): Har baar loop ke end par i ki value 1 se badhti hai.
5. Loop 5 baar chalega, kyunki i ki value 5 se chhoti hai.
6. Loop ke baad program khatam hota hai.
Notice that the condition is checked for 6 times (5 times true, 1 time false). 
The loop runs 5 times because the condition is checked at the beginning of each iteration.
*/