#include<stdio.h>
int p1()
{
    float INR, USD;
    printf("Enter amount in INR: ");
    scanf("%f",&INR);
    USD=INR/84.23;
    printf("INR %.2f = USD %.2f",INR,USD);
    printf("\n");
    return 0;
}
int p2()
{
    int x;
    printf("Enter a three digit number");
    scanf("%d",&x);
    
    printf("Result is %d",x%10*100+x/10);
    printf("\n");
    return 0;
}
int p3p4p5()
{
    int x;
    x=10>8>4;
    printf("%d\n",x); //0
    x=!2>-2;
    printf("%d\n",x); //1
    x=3<0&&5>0;
    printf("%d",x); //0
    
    printf("\n");
    return 0;
}
int main()
{
    p3p4p5();
    return 0;
}