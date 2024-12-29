// Ques.3.Write a program to check whether a given number is an even number or an odd number. 

#include <stdio.h>
#include <conio.h>
int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x % 2 == 0)
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }

    getch();
}

// NOTE = Kabhi bhi divide(/) operator se divisibility check nhi kra ja sakti Hume iske liye use krna hota hai modulous(%) operator.

/*
1. Alternative above Program:

#include <stdio.h>
int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);
 
    if (x % 2)
    {
        printf("odd");
    }
    else
    {
        printf("Even");
    }

    return 0;
}




*/








