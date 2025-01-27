#include <stdio.h>

int q1()
{
    int a, b, c;
    float avg;                                            // yha par float lgaaya kyunki average decimal value bhi ho skti hai.

    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    avg = (a + b + c) / 3.0; // yha par bracket jrur lgaayein kyunki agar bracket nhi lgaayenge to division pehle hoga phir addition hoga.aur division me integer value aayegi.

    printf("Average  is %f ", avg);

    return 0;
}
int q2()
{
    int r;
    float c;

    printf("Enter radius of circle: ");
    scanf("%d", &r);

    c = 2 * 3.14 * r;

    printf("Circumference of the circle is %f", c);

    return 0;
}
int q3()
{
    int p, t;
    float r, si;

    printf("Enter P,R and T:");
    scanf("%d%f%d", &p, &r, &t);

    si = (p * r * t) / 100;

    printf("Simple interest is %f", si);

    return 0;
}
int q4()
{
    int l, b, h, volume;

    printf("Enter L,B and H of the cuboid: ");
    scanf("%d%d%d", &l, &b, &h);

    volume = l * b * h;

    printf("Volume of cuboid is %d ", volume);

    return 0;
}
int q5()
{
    float cp, sp, profit;
    printf("Enter Cp and Sp of 12 Bananas: ");
    scanf("%f%f", &cp, &sp);

    profit = (sp - cp) / 12 * 25;
    printf("Profit(+ve)/loss(-ve) is  %f", profit);
    return 0;
}