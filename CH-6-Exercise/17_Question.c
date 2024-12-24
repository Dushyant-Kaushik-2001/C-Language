/*Ques.13. Write a program which takes the length of the sides of a triangle as an input. Display whether the
triangle is valid or not.
*/

#include <stdio.h>

float main()
{
    int side1, side2, side3;

    printf("Enter the length of the first side: ");
    scanf("%f", &side1);

    printf("Enter the length of the second side: ");
    scanf("%f", &side2);

    printf("Enter the length of the third side: ");
    scanf("%f", &side3);

        if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
    {
        printf("The triangle is valid.");
    }
    else
    {
        printf("The triangle is not valid.");
    }

    return 0;
}

/*
Explanation:
Input: The program takes three floating-point values as input, which represent the lengths of the sides of the 
triangle.
Logic:
The Triangle Inequality Theorem states that the sum of the lengths of any two sides of a triangle must be greater 
than the length of the third side. We check this condition for all three pairs of sides.
If all three conditions are satisfied, the triangle is valid.

*/



































