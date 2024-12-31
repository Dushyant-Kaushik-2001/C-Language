//Ques.5.Write a program to print the first 10 even natural numbers in reverse order.

#include <stdio.h>
#include <conio.h>
int main()
{

    int i = 10;
    while (i >= 1)
    {
        printf("%d\n", 2 * i);
        i--;
    }

    getch();    
}


/*
Explanation:
1. Initialization (i = 10): Loop i ko 10 se start karta hai.
2. Condition (i >= 1): Loop 1 tak chalega, yani i 1 ke barabar ya usse bada hoga.
3. Body (printf("%d\n", 2 * i);): Har iteration mein 2*i ki value print hoti hai.
4. Decrement (i--): Har baar loop ke end par i ki value 1 se kam hoti hai.
5. Loop 10 baar chalega, kyunki i ki value 1 se badi hai.
6. Loop ke baad program khatam hota hai.


****************************************************Alternate Solution:******************************************************************

#include <stdio.h>
#include <conio.h>
int main()
{
    for (int i = 10; i >= 1; i--)
    {
        printf("%d\n", 2 * i);
    }

    getch();
}

Explanation:
Initialization (i = 10): Loop i ko 10 se start karta hai.
Condition (i >= 1): Loop 1 tak chalega, yani i 1 ke barabar ya usse bada hoga.
Body (printf("%d\n", 2 * i);): Har iteration mein 2*i ki value print hoti hai.




*/


























