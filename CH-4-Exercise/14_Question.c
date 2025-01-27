// Ques.14.Write a C program to calculate Circumference of a circle.

#include <stdio.h>

int main()
{
    int r;
    float c;

    printf("Enter radius of circle: ");
    scanf("%d", &r);

    c = 2 * 3.14 * r;

    printf("Circumference of the circle is %f", c);

    return 0;
}
