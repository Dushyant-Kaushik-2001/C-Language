// Ques.17.Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33.
// Now display whether the candidate passed the examination or failed.

#include <stdio.h>
#include <conio.h>
int main()
{
    float marks1, marks2, marks3, marks4, marks5;

    
    printf("Enter the marks of 5 subjects:");
    scanf("%f %f %f %f %f", &marks1, &marks2, &marks3, &marks4, &marks5);

    
    if (marks1 < 33 || marks2 < 33 || marks3 < 33 || marks4 < 33 || marks5 < 33)
    {
        printf("Candidate failed.");
    }
    else
    {
        printf("Candidate passed.");
    }

    return 0;
}
