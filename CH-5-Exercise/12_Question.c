// Ques.12.Write a program to take a three digit number from the user and rotate its digits by one position towards the right

#include <stdio.h>

int main()
{
    int x, lastDigit, rotatedNumber;

    printf("Enter a three-digit number: ");
    scanf("%d", &x);

    // Ensure the input is a three-digit number
    if (x < 100 || x > 999)
    {
        printf("Please enter a valid three-digit number.\n");
        return 1;
    }

    // Extract the last digit
    lastDigit = x % 10;

    // Remove the last digit and shift the remaining digits to the right
    rotatedNumber = lastDigit * 100 + x / 10;

    // Display the rotated number
    printf("The number after rotating its digits to the right is: %d", rotatedNumber);

    return 0;
}

