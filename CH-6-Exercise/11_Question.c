// Ques.11. Write a program to find greater between two numbers.You have to print greater number, if both are equal then print any number.
// Ques.11. Write a program to print greater between two numbers. Print one number if both are the same. 

#include <stdio.h>
#include <conio.h>
int main()
{
    int x, y;
    printf("Enter the numbers: ");
    scanf("%d%d", &x,&y);
    
    if (x > y)
    {
        printf("The greater number is: %d", x);
    }
    else if (y > x)
    {
        printf("The greater number is: %d", y);
    }
    else
    {
        printf("Both numbers are equal.%d",x);                             // Or y, as they are the same
    }
    getch();
}
