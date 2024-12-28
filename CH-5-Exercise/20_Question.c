// Ques.20.Write a program to take a three digit number from the user and rotate its digits by one position towards the right.

#include <stdio.h>
#include <conio.h>
int main()
{
    int x, rotation;

    printf("Enter a three-digit number: ");
    scanf("%d", &x);

    rotation = (x % 10) * 100 + (x / 10);

    printf("The number after rotating its digits by one position to the right is: %d", rotation);

    getch();
}


/*
Explanation:

1. Extracting the Last Digit = number % 10 Last digit ko extract karte hain (ones place).

2. Shifting the Digits = (number / 10) First two digits ko shift karne ke liye, number ko 10 se divide karte hain (tens aur hundreds place).

3. Forming the New Number:
(a). (number % 10) * 100 = Last digit ko hundreds place mein shift karte hain.
(b). + (number / 10) = First two digits ko tens aur ones place mein shift karte hain.

4. Final Output = Resulting rotated number ko print karte hain.

*/