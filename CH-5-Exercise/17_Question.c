// Ques.17. Write a program to input a three-digit number and display the sum of the digits. 

#include <stdio.h>
#include <conio.h>
int main()
{
    int x, sum;

    
    printf("Enter a three-digit number: ");
    scanf("%d", &x);

    
    sum = (x % 10) + (x / 10 % 10) + (x / 100);

    
    printf("The sum of the digits is: %d", sum);

    getch();
}




/*
Explanation:

1. Extracting Digits:

(a). number % 10 = Extracts the last digit (ones place).
(b). number / 10 % 10 = Removes the last digit and then extracts the second digit (tens place).
(c). number / 100 = Extracts the first digit (hundreds place).

2. Summing the Digits = The extracted digits are added together to get their sum.

3. Output the Result = The sum is printed.

*********************************************************Calculation Steps******************************************************************

1. Last digit = 456 % 10 = 6.
2. Second digit = (456 / 10) % 10 = 5.
3. First digit = 456 / 100 = 4.
4. Sum = 6 + 5 + 4 = 15.

*/