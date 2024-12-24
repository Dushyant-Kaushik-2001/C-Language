/*
Ques.16.Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer.
Calculate percentage and grade according to following:
 Percentage >= 90% : Grade A
 Percentage >= 80% : Grade B
 Percentage >= 70% : Grade C
 Percentage >= 60% : Grade D
 Percentage >= 40% : Grade E
 Percentage < 40% : Grade
*/

#include <stdio.h>

int main()
{
    float physics, chemistry, biology, mathematics, computer;
    float total, percentage;

    printf("Enter marks for Physics: ");
    scanf("%f", &physics);

    printf("Enter marks for Chemistry: ");
    scanf("%f", &chemistry);

    printf("Enter marks for Biology: ");
    scanf("%f", &biology);

    printf("Enter marks for Mathematics: ");
    scanf("%f", &mathematics);

    printf("Enter marks for Computer: ");
    scanf("%f", &computer);

    // Calculate total and percentage
    total = physics + chemistry + biology + mathematics + computer;
    percentage = (total / 500) * 100;

    // Determine the grade based on the percentage
    char grade;
    if (percentage >= 90)
    {
        grade = 'A';
    }
    else if (percentage >= 80)
    {
        grade = 'B';
    }
    else if (percentage >= 70)
    {
        grade = 'C';
    }
    else if (percentage >= 60)
    {
        grade = 'D';
    }
    else if (percentage >= 40)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }

    printf("Total Marks = %f\n", total);
    printf("Percentage = %f\n", percentage);
    printf("Grade = %c", grade);

    return 0;
}

