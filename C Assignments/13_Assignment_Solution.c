#include <stdio.h>
// Ques.1.Write a program to calculate sum of first N natural numbers.
int q1()
{
    int n, i, sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("The Sum of first %d natural number is: %d", n, sum);

    return 0;
}
// Ques.2.Write a program to calculate sum of first N even natural numbers.
int main()
{
    int n, i, sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + 2 * i;
    }
    printf("The sum of first %d even natural numbers is: %d", n, sum);

    return 0;
}
// Ques.3.Write a program to calculate sum of first N odd natural numbers.
int main()
{
    int n, i, sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + 2 * i - 1;
    }
    printf("The sum of first %d odd natural numbers is: %d", n, sum);

    return 0;
}
// Ques.4.Write a program to calculate sum of squares of first N natural numbers.
int main()
{
    int n, i, sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i * i;
    }
    printf("The sum of squares of first %d natural numbers is: %d", n, sum);

    return 0;
}
// Ques.25. Write a program to calculate sum of cubes of first N natural numbers.
int main()
{
    int N, i, sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        sum = sum + i * i * i;
    }
    printf("The sum of cubes of first %d natural numbers is: %d", N, sum);

    return 0;
}
