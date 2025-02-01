#include<stdio.h>
int p1()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x>99&&x<1000)
        printf("Three digits number");
    else
        printf("Not a three digits number");
    printf("\n");
    return 0;
}
int p2()
{
    int x,y;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    if(x>y)
        printf("%d",x);
    else
        printf("%d",y);
    printf("\n");
    return 0;
}
int p3()
{
    int a,b,c,d;
    printf("Enter values of a,b,c in quadratic equation");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
        printf("Real and Distinct");
    else if(d==0)
        printf("Real and Equal");
    else
        printf("Imaginary roots");
    printf("\n");
    return 0;
}
int p4()
{
    int year;
    printf("Enter year number");
    scanf("%d",&year);
    if(year%100==0){
        if(year%400==0)
            printf("Leap Year");
        else
            printf("Non Leap Year");
    }
    else{
        if(year%4==0)
            printf("Leap Year");
        else
            printf("Non Leap Year");
    }
        
    printf("\n");
    return 0;
}
int p5()
{
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",a>b? a>c?a:c : b>c?b:c );
    printf("\n");
    return 0;
}