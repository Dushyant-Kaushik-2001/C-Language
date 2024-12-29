// Ques.22.Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots.

#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    float a, b, c, discriminant;

    
    printf("Quadratic equation ax^2 + bx + c = 0 ke liye a, b, c ke values daaliye:\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);

    
    discriminant = b * b - 4 * a * c;

   
    if (discriminant > 0)
    {
        printf("Roots real and distinct hain.");
    }
    else if (discriminant == 0)
    {
        printf("Roots real and equal hain.");
    }
    else
    {
        printf("Roots imaginary hain.");
    }

    getch();
}
