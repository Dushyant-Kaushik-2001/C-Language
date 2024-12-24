// Ques.8 Write a program to find greater between two numbers. Your result should be the number which is greater or if both are equal your output should be “equal”.

#include <stdio.h>
#include <conio.h>
int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

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
        printf("Equal");
    }
    getch();
}

/*
Lets suppose 
 a = 10 and b = 12


*/