#include <stdio.h>
// Ques.1.Write a program to print MySirG 5 times on the screen.
int q1()
{
    int i = 1; 

    while (i <= 5) 
    {
        printf("MySirG\n"); 
        i++;                
    }
    return 0;
}
// Ques.2. Write a program to print the first 10 natural numbers.
int q2()
{
    int i = 1;

    while (i <= 10)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
// Ques.3. Write a program to print the first 10 natural numbers in reverse order.
int q3()
{
    int i = 10;

    while (i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
    return 0;
}
int q3alternate()
{
    int i = 1;

    while (i <= 10)
    {
        printf("%d ", 11 - i);
        i++;
    }
    return 0;
}
// Ques.4.Write a program to print the first 10 odd natural numbers.
int q4()
{
    int i = 1;

    while (i <= 10)
    {
        printf("%d\n", 2 * i - 1);
        i++;
    }
    return 0;
}
// Ques.5.Write a program to print the first 10 odd natural numbers in reverse order.
int q5()
{
    int i = 10;

    while (i >= 1)
    {
        printf("%d\n", 2 * i - 1);
        i--;
    }
    return 0;
}
int q5alternate()
{
    int i = 1;

    while (i <= 10)
    {
        printf("%d\n", 21 - 2 * i);
        i++;
    }
    return 0;
}
// Ques.6.Write a program to print the first 10 even natural numbers.
int q6()
{
    int i = 1;

    while (i <= 10)
    {
        printf("%d\n", 2 * i);
        i++;
    }
    return 0;
}
// Ques.7.Write a program to print the first 10 even natural numbers in reverse order.
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
    int i=1;

    while(i<=10)
    {
        printf("%d\n",22-2*i);
        i++;
    }
    return 0;
}
// Ques.8.Write a program to print the squares of first 10 natural numbers.
int q8()
{
    int i = 1;

    while (i <= 10)
    {
        printf("%d\n", i * i);

        i++;
    }
    return 0;
}
// Ques.9. Write a program to print the cubes of first 10 natural numbers.
int q9()
{
    int i = 1;

    while (i <= 10)
    {
        printf("%d\n", i * i * i);

        i++;
    }
    return 0;
}
// Ques.10.Write a program to print a table of 5.
int main()
{
    int i = 1;

    while (i <= 10)
    {
        printf("5 * %d = %d\n", i, 5 * i);
        i++;
    }
    return 0;
}
