// Ques.11. Assume price of 1 USD is INR 76.23. Write a C program to take the amount in INR and convert it into USD

#include <stdio.h>
#include <conio.h>
int main()
{
    float inr, usd;
    float exchange_rate = 76.23;                                 // 1 USD = 76.23 INR

    printf("Enter amount in INR: ");
    scanf("%f", &inr);

    usd = inr / exchange_rate;                                   // Convert INR to USD

    printf("%.2f INR is equivalent to %.2f USD\n", inr, usd);

    getch();
}
