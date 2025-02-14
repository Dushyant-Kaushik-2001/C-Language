#include <stdio.h>
// Ques.1. Write a program to print all Prime numbers under 100.
int q1()
{
    int i, n;
    for (n = 2; n <= 100; n++)
    {
        for (i = 2; i < n; i++)
            if (n % i == 0)
                break;
        if (i == n)
            printf("%d ", n);
    }
}
// Ques.2. Write a program to print all Prime numbers between two numbers.
int q2()
{
    int i, n, a, b;
    printf("Enter lower and upper limit: ");
    scanf("%d%d", &a, &b);
    for (n = a + 1; n < b; n++)
    {
        for (i = 2; i < n; i++)
            if (n % i == 0)
                break;
        if (i == n)
            printf("%d ", n);
    }
}
// Ques.3. Write a program to find the next Prime number of a given number.
int q3()
{
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    n++;

    while (1)
    {
        for (i = 2; i < n; i++)
            if (n % i == 0)
                break;
        if (i == n)
            break;
        n++;
    }
    printf("%d ", n);
}
// Ques.4. Write a program to find the HCF of two numbers. HCF = Highest Common Factor.
int q4()
{
    int a, b, H;
    printf("Enter two numbers");
    scanf("%d%d", &a, &b);
    
    for (H = a < b ? a : b; H >= 1; H--)
        if (a % H == 0 && b % H == 0)
            break;
    printf("HCF is %d", H);
}