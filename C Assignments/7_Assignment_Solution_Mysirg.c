#include<stdio.h>
int p1()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x>0)
        printf("Positive");
    else
        printf("Non Positive");
    printf("\n");
    return 0;
}
int p2()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x%5)
        printf("Not Divisible by 5");
    else
        printf("Divisible by 5");
    printf("\n");
    return 0;
}
int p3()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x%2)
        printf("Odd");
    else
        printf("Even");
    printf("\n");
    return 0;
}
int p4()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x/2*2==x)
        printf("Even");
    else
        printf("Odd");
    printf("\n");
    return 0;
}
int p5()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x&1)
        printf("Odd");
    else
        printf("Even");
    printf("\n");
    return 0;
}