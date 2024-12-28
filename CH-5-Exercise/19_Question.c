// Ques.19.Assume price of 1 USD is INR 84.23. Write a program to take the amount in INR and convert it into USD.

#include <stdio.h>
#include <conio.h>
int main()
{
    float inr,usd;

    printf("Enter the amount in INR: ");                                                  // INR = Indian Rupees  USD = US Dollars 
    scanf("%f", &inr);

    usd = inr / 84.23;

    printf("The equivalent amount in USD is: %.2f", usd);

    getch();
}



/*
Explanation:

1. User Input: User se INR mein amount input liya jaata hai.
2. Conversion Rate: 1 USD = 84.23 INR.
3. Conversion Logic: INR amount ko 84.23 se divide karke USD mein convert kiya jaata hai.
4. Output: Converted amount ko print kiya jaata hai.
5. Note: %.2f specifier se 2 decimal places tak ka output diya jaata hai.
*/
