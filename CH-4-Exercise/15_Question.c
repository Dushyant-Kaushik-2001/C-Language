// Ques.15.Write a C program to calculate the volume of a Cuboid.

#include <stdio.h>

int main()
{
    float x, y, z, volume;

    printf("Enter the length of the cuboid: ");
    scanf("%f", &x);

    printf("Enter the breadth of the cuboid: ");
    scanf("%f", &y);

    printf("Enter the height of the cuboid: ");
    scanf("%f", &z);

    volume = x * y * z;

    printf("The volume of the cuboid is %f ", volume);

    getch();
}