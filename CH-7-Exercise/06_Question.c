// Ques.6.Write a program to print the first 10 odd natural numbers

#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d\n",2*i-1);
        i++;
    }

    getch();
}


/*
Explanation:
1. Initialization (i = 1): Loop i ko 1 se start karta hai.
2. Condition (i <= 10): Loop 10 tak chalega, yani i 10 ke barabar ya usse chhota hoga.
3. Body (printf("%d\n", 2*i-1);): Har iteration mein 2*i-1 ki value print hoti hai.
4. Increment (i++): Har baar loop ke end par i ki value 1 se badhti hai.
5. Loop 10 baar chalega, kyunki i ki value 10 se chhoti hai.
6. Loop ke baad program khatam hota hai.


*******************************************************Alternate Solution:******************************************************************

#include <stdio.h>
#include <conio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", 2 * i - 1);
    }

    getch();
}

Explanation:
Initialization (i = 1): Loop i ko 1 se start karta hai.
Condition (i <= 10): Loop 10 tak chalega, yani i 10 ke barabar ya usse chhota hoga.
Body (printf("%d\n", 2 * i - 1);): Har iteration mein 2*i-1 ki value print hoti hai.



*/































