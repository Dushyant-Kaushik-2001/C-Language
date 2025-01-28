#include<stdio.h>
int p10()
{
    int r;
    float a;
    printf("Enter radius: ");
    scanf("%d",&r);
    a=3.14*r*r;
    printf("Area is %f",a);
    printf("\n");
    return 0;
}
int p9()
{
    int l,b,a;
    printf("Enter length and breadth: ");
    scanf("%d%d",&l,&b);
    a=l*b;
    printf("Area is %d",a);
    printf("\n");
    return 0;
}
int p8()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    y=x*x;
    printf("Square of %d is %d",x,y);
    printf("\n");
    return 0;
}
int p7()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("Sum is %d",a+b);
    printf("\n");
    return 0;
}
int p6()
{
    printf("\"Teacher's Day\"");
    printf("\n");
    return 0;
}
int p5()
{
    printf("\\r");
    printf("\n");
    return 0;
}
int p4()
{
    printf("\\n");
    printf("\n");
    return 0;
}
int p3()
{
    printf("\"MySirG\"");
    printf("\n");
    return 0;
}
int p2()
{
    printf("Hello\nStudents");
    printf("\n");
    return 0;
}
int p1()
{
    printf("Hello Students");
    printf("\n");
    return 0;
}