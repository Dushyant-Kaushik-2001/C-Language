// Ques.16.Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.

#include <stdio.h>
#include <conio.h>
int main()
{
    float a, b, c;

    
    printf("Enter the sides of Triangle\n");
    printf("Side 1: ");
    scanf("%f", &a);
    printf("Side 2: ");
    scanf("%f", &b);
    printf("Side 3: ");
    scanf("%f", &c);

    
    if (a + b > c && a + c > b && b + c > a)                                       // Triangle inequality theorem
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is not valid ");
    }

    return 0;
}


/*
Triangle Validity:
Triangle valid hone ke liye yeh condition honi chahiye:
a + b > c
a + c > b
b + c > a 
Agar yeh teeno conditions satisfy hoti hain, toh triangle valid hai.
*/