// Ques.16.Write a program to make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make it x=2340)

#include <stdio.h>
#include <conio.h>
int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    x = x / 10 * 10;

    printf("The number after making the last digit zero is: %d", x);

    getch();
}





/*
Explanation:

1. Logic to Remove Last Digit :

(a). x / 10 =Number ko 10 se divide karke last digit hata dete hain (integer division se).
(b). * 10 = Resultant number ko 10 se multiply karke last digit ko zero bana dete hain.

2. Example Calculation:

(a). Suppose x = 2345.
(b). x / 10 = 234 (last digit hat gayi).
(c). 234 * 10 = 2340 (last digit zero ho gayi).

3. Output : Modified number ko print karte hain.

*/