//Ques.18. Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example- number=234 and digit=9 then the resulting number is 2349)

#include <stdio.h>
#include <conio.h>
int main()
{
    int x, digit, result;

    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter a digit to append: ");
    scanf("%d", &digit);

    result = x * 10 + digit;                                                   // Append the digit to the number

    printf("The resulting number is: %d", result);

    getch();
}


/*
Explanation:

1. User Input = User ek number (e.g., 234) aur ek digit (e.g., 9) ko input karega.

2. Appending the Digit:
(a). number * 10 = Number ko 10 se multiply karke ek nayi place banaate hain (e.g., 234 * 10 = 2340).
(b). + digit = Naye place mein digit ko add karte hain (e.g., 2340 + 9 = 2349).

3. Output the Result = Append hone ke baad final result ko print karte hain.







*/