// Ques.15.Write a program to check whether a given number is a three-digit number or not.

#include <stdio.h>
#include <conio.h>
int main()
{
    int x;

    
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x >= 100 && x <= 999)                                                      // Three-digit check karna
    {
        printf("%d is a three digit number", x);
    }
    else if (x <= -100 && x >= -999)
    { 
        printf("%d is a three digit number", x);                                  // Negative three-digit check
    }
    else
    {
        printf("%d is not a three digit number", x);
    }

    return 0;
}

/*
Explaination:

1. Three-digit numbers woh hote hain jo:

(a). Positive: 100 se 999 ke beech hote hain.
(b). Negative: -100 se -999 ke beech hote hain.

2. Conditions:

(a). Agar num >= 100 && num <= 999, toh positive three-digit.
(b). Agar num <= -100 && num >= -999, toh negative three-digit.

3. Agar dono conditions satisfy nahi hoti, toh number three-digit nahi hai.




*/