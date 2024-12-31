// Ques.13.  Write a program to print the first N natural numbers in reverse order.

#include <stdio.h>
#include <conio.h>
int main()
{
    int N, i;

    printf("Enter the number of natural numbers to print in reverse order:"); 
    scanf("%d", &N); 
    
    i = N;                                                                // Start from N
    while (i >= 1)                                                       // Loop will run until i is greater than or equal to 1
    {                                                          
        printf("%d\n", i);                                              // Print the current value of i
        i--;                                                           // Decrement i to move to the next number in reverse order
    }

    getch();
}


/*
Explanation:
1. Initialization (i = N): Loop ko N se start karte hain, taaki reverse order mein print kiya jaa sake.
2. Condition (i >= 1): Loop tab tak chalega jab tak i ki value 1 se zyada ya barabar hoti hai.
3. Decrement (i--): Har iteration ke baad i ki value ko 1 se decrement karenge, taaki agla number reverse order mein print ho sake.
4. Humne i ko counter ke roop mein use kiya hai aur har iteration ke baad i ko decrement kiya hai, taaki numbers reverse mein print ho sakein.

***********************************************************Alternate Solution*********************************************************************
1. Using For Loop:
#include <stdio.h>
#include <conio.h>
int main()
{
    int N, i;

    printf("Enter the number of natural numbers to print in reverse order:"); 
    scanf("%d", &N); 
    
    for (i = N; i >= 1; i--) 
    {
        printf("%d\n", i); 
    }

    getch();
}

2. Using While Loop:
#include <stdio.h>

int main()
{
    int n, i=1;
    printf("Enter a number");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d\n", n + 1 - i);
        i++;
    }

    return 0;
}



*/