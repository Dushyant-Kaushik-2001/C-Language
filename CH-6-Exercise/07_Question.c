// Ques.7. Write a program to to find greater among three numbers.

#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c,k;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a,&b,&c);
    
    if (a > b && a > c)
    {
        k = a;
    }
    else if (b > c)
    {
        k = b;
    }
    else
    {
        k = c;
    }
    printf("The greatest number is: %d",k);

    getch();
}
