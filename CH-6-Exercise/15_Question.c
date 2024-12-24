/*Ques.11.Write a program to find greater among three numbers. If two or three numbers are identical and greatest
among all then print it only once.
*/
#include <stdio.h>
int main()
{
    int x, y, z, greatest;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    printf("Enter the third number: ");
    scanf("%d", &z);

    if (x >= y && x >= z)
    {
        greatest = x;
    }
    else if (y >= x && y >= z)
    {
        greatest = y;
    }
    else
    {
        greatest = z;
    }

    printf("The greatest number is: %d", greatest);

    return 0;
}

/*
Explanation:
Input:The program takes three integers as input from the user.
Logic:
1.Compare all three numbers using >= to handle cases where two or all three numbers are identical and the greatest.
2.Assign the greatest value to the variable greatest.
3.No need to handle identical cases separately because the >= comparison ensures the correct greatest value is 
selected without duplication.












*/















