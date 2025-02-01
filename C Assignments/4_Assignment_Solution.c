#include <stdio.h>

int q1()
{
    printf("Size is %d", sizeof('A'));
    return 0;
}
int q2()
{
    printf("Size is %d", sizeof(4.5));
    return 0;
}
int q3()
{
    char ch = 'A';
    ch++; // ch = ch+1
    printf("%c", ch);
    return 0;
}
int q4()
{
    int a, b, c;

    printf("Enter Two numbers: ");
    scanf("%d%d", &a, &b);

    c = a;
    a = b;
    b = c;

    printf("a = %d b = %d ", a, b);

    return 0;
}
int q5()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    // Swapping without a third variable
    a = a + b; // Step 1: Add a and b
    b = a - b; // Step 2: Subtract b from the sum to get the original value of a
    a = a - b; // Step 3: Subtract the new b from the sum to get the original value of b

    printf("a = %d b = %d", a, b);

    return 0;
}
int q6()
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Swap using bitwise XOR
    a = a ^ b; // Step 1
    b = a ^ b; // Step 2
    a = a ^ b; // Step 3

    printf("a = %d b = %d", a, b);

    return 0;
}
int q7()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a + b - (b = a);

    printf("a = %d, b = %d", a, b);

    return 0;
}
