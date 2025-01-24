// Ques.11.Write a C program to calculate the area of a rectangle.

#include <stdio.h>

int main()
{
    int x, y, area;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d%d", &x, &y);

    area = x * y;
    printf("The area of rectangle is %d", area);
    return 0;
}
