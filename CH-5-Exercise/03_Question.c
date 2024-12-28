// Ques.3.Write a Program to print a given number without its last digit.
//OR
//Ques.3 Write a program to print user input number with the last digit lost. (if user enters 237, your output should be 23. If user inputs 4, your output should be 0)

#include <stdio.h>
#include <conio.h>
int main()
{
    int x, y;

    printf("Enter a number: ");
    scanf("%d", &x);

    // Remove the last digit by integer division
    y = x / 10;

    printf("The number without the last digit is: %d", y);

    getch();
}


/*
Ques. How to remove last digit of a given number?
Ans.
Agr hum x % 10 krte hain to isse last digit milti hai lekin hume vo nhi chaiye usko htana hai toh hum x / 10 krenge to last digit hat jaayegi
*/
