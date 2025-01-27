// Ques.13.Write a C program to calculate the average of three numbers. Numbers are taken from the User.

#include <stdio.h>

int main()
{
    int a, b, c;
    float avg;                                                   // yha par float lgaaya kyunki average decimal value bhi ho skti hai.

    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    avg = (a + b + c) / 3.0;                                    // yha par bracket jrur lgaayein kyunki agar bracket nhi lgaayenge to division pehle hoga phir addition hoga.aur division me integer value aayegi.

    printf("Average  is %f ", avg);

    return 0;
}


/*
Logic Building Tips:

1. Read and Understand the Question.
2. Test Case.
3. Dry Run.

*/