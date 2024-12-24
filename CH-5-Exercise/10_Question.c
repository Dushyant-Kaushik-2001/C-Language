// Ques.10. Write a program to input a number from the user and also input a digit. Append a digit in the number
// and print the resulting number. (Example- number=234 and digit=9 then the resulting number is 2349)

#include <stdio.h>
#include <conio.h>
int main()
{
    int x, digit, result;

    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter a digit to append: ");
    scanf("%d", &digit);

    result = x * 10 + digit;                                        // Append the digit to the number

    printf("The resulting number is: %d", result);

    getch();
}
