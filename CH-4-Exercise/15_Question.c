// Ques.15. Write a program to calculate the area of a rectangle

#include <stdio.h>
#include <conio.h>
int main()
{
    int x, y, area;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &x);

    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &y);

    area = x * y;

    printf("The area of the rectangle is %d", area);

    getch();
}

