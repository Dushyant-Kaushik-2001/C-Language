// Ques.20.. Write a program to calculate the area of a triangle where base and height of the triangle are given

#include <stdio.h>
#include <conio.h>
int main()
{
    float base, height, area;

    printf("Enter the base of the triangle: ");
    scanf("%f", &base);

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    area = 0.5 * base * height;

    printf("The area of the triangle is %f ", area);

    getch();
}
