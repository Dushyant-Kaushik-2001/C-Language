// Ques.11.Write a C program to calculate the area of a rectangle.

#include <stdio.h>
#include <conio.h>
int main()
{
    int x, y, area;
    printf("Enter the length of rectangle: ");
    scanf("%d", &x);
    printf("Enter the breadth of rectangle: ");
    scanf("%d", &y);
    area = x * y;
    printf("The area of rectangle is %d", area);
    getch();
}
