// Ques.12.Write a C program to calculate the area of a circle.

#include <stdio.h>

int main()
{
    int r;
    float a;

    printf("Enter radius of circle: ");
    scanf("%d", &r);

    a = 3.14 * r * r;

    printf("Area of Circle is %f ", a);

    return 0;
}
