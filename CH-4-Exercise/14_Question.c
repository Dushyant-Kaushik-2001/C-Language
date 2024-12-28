// Ques.14.Write a C program to calculate Circumference of a circle.

#include <stdio.h>
#include <conio.h>
int main()
{
    float r, c;

    printf("Enter the radius of circle: ");
    scanf("%f", &r);

    c = 2 * 3.14 * r;

    printf("The circumference of the circle is %f", c);

    getch();
}
