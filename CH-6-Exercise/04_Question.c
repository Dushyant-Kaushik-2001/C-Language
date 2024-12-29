// Ques.4. Write a program to check whether a number is even or odd without using modulus(%) operator?
// Ques.4.Write a program to check whether a given number is even or odd using a bitwise operator?

#include <stdio.h>
#include <conio.h>
int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x & 1)
    {
        printf("The number is odd.");
    }
    else
    {
        printf("The number is even.");
    }

    getch();
}

/*
Explaination:

1. Kaise kaam karta hai = x & 1 sirf number ke last bit ko check karta hai.
Agar last bit 1 hai, to number odd hai.
Agar last bit 0 hai, to number even hai.

2. Example:

(a). Agar input 4 hoga toh 4 ka binary kro
Binary of 4 = 100
Last bit 0 hai → Even.

(b). Agar input 7 hoga toh 7 ka binary kro
Binary of 7 = 111
Last bit 1 hai → Odd.



*/
