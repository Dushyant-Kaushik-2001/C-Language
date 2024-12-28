// Ques.18.Write a C program to calculate the profit percentage upon selling a product. Cost price and selling price are given by the user

#include <stdio.h>
#include <conio.h>
int main()
{
    float x, y, profit, profitPercentage;

    printf("Enter the cost price of the product: ");
    scanf("%f", &x);

    printf("Enter the selling price of the product: ");
    scanf("%f", &y);

    profit = y - x;

    profitPercentage = (profit / x) * 100;

    printf("The profit percentage is %f", profitPercentage);

    getch();
}

