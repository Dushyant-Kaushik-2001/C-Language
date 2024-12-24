// Ques.09. Write a program to print greater among three numbers. Print only the greater number.

#include <stdio.h>
#include <conio.h>
int main()
{
    int x, y, z,greatest;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &x,&y,&z);
    
    if (x > y && x > z)
    {
        greatest = x;
    }
    else if (y > z)
    {
        greatest = y;
    }
    else
    {
        greatest = z;
    }
    printf("The greatest number is: %d",greatest);

    getch();
}

/*
lets suppose x=15,y=20,z=25
*/






























