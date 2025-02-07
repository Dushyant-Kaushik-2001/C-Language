#include <stdio.h>
// Ques.1.Write a program to print MySirG N times on the screen.
int q1()
{
    int n;
    int i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("MySirG\n");
        i++;
    }
    return 0;
}
// Ques.2. Write a program to print the first N natural numbers.
int q2()
{
    int n;
    int i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
// Ques.3. Write a program to print the first N natural numbers in reverse order.
int q3()
{
    int n;
    int i;
    printf("Enter a number: ");
    scanf("%d", &n);

    i = n;

    while (i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
    return 0;
}
int q3alternate()
{
    int n;
    int i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d ", 11 - i);
        i++;
    }
    return 0;
}
// Ques.4.Write a program to print the first N odd natural numbers.
int q4()
{
    int n;
    int i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\n", 2 * i - 1);
        i++;
    }
    return 0;
}
// Ques.5.Write a program to print the first N odd natural numbers in reverse order.
int q5()
{
    int n;
    int i=n;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i >= n)
    {
        printf("%d\n", 2 * i - 1);
        i--;
    }
    return 0;
}
int q5alternate()
{
    int n;
    int i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\n", 2 * n + 1 - 2 * i);
        i++;
    }
    return 0;
}
// Ques.6.Write a program to print the first N even natural numbers.
int q6()
{
    int n;
    int i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\n", 2 * i);
        i++;
    }
    return 0;
}
// Ques.7.Write a program to print the first N even natural numbers in reverse order.
int q7()
{
    int i = 10;

    while (i >= 1)
    {
        printf("%d\n", 2 * i);
        i--;
    }
    return 0;
}
int q7alternate()
{
    int n;
    int i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\n", 2 * n +2 - 2 * i);
        i++;
    }
    return 0;
}
// Ques.8.Write a program to print the squares of first N natural numbers.
int q8()
{
    int n;
    int i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\n", i * i);

        i++;
    }
    return 0;
}
// Ques.9. Write a program to print the cubes of first N natural numbers.
int q9()
{
    int n;
    int i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\n", i * i * i);

        i++;
    }
    return 0;
}
// Ques.10.Write a program to print a table of N.
int main()
{
    int n;
    int i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= 10)
    {
        printf("%d * %d = %d\n", n, i,  i * n);
        i++;
    }
    return 0;
}
