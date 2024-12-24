// Ques.15.Write a program to find roots of a given quadratic equation.

#include <stdio.h>
#include <math.h> // For sqrt() function

int main()
{
    float a, b, c, discriminant, root1, root2;

    // Input coefficients of the quadratic equation
    printf("Enter the coefficients a, b, and c (for ax^2 + bx + c = 0):\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);

    // Check if a is zero, as the equation would not be quadratic
    if (a == 0)
    {
        printf("Not a quadratic equation, 'a' cannot be 0.\n");
    }
    else
    {
        // Calculate the discriminant
        discriminant = b * b - 4 * a * c;

        // Check the nature of the roots
        if (discriminant > 0)
        {
            // Two real and distinct roots
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("The roots are real and distinct.\n");
            printf("Root 1 = %.2f\n", root1);
            printf("Root 2 = %.2f\n", root2);
        }
        else if (discriminant == 0)
        {
            // One real and equal root
            root1 = root2 = -b / (2 * a);
            printf("The roots are real and equal.\n");
            printf("Root 1 = Root 2 = %.2f\n", root1);
        }
        else
        {
            // Imaginary roots
            float realPart = -b / (2 * a);
            float imaginaryPart = sqrt(-discriminant) / (2 * a);
            printf("The roots are imaginary.\n");
            printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
            printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
        }
    }

    return 0;
}

/*
Explanation:
Input: The program prompts the user to input the coefficients a, b, and c of the quadratic equation 
𝑎𝑥2+𝑏𝑥+𝑐=0 

Logic:
1.First, it checks if a is zero, since the equation would not be quadratic in that case.
2.Then, it calculates the discriminant:
discriminant=𝑏2−4𝑎𝑐
3.Based on the discriminant:
(a)If the discriminant is positive, the equation has two real and distinct roots.
(b)If the discriminant is zero, the equation has two real and equal roots.
(c)If the discriminant is negative, the equation has imaginary roots.

Output: The program prints the roots of the equation, handling real and imaginary roots appropriately.

*/































