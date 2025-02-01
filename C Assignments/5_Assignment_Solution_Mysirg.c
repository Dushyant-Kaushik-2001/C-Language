#include<stdio.h>
int p1()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    
    printf("Sum is %d",x/100+x/10%10+x%10);
    printf("\n");
    return 0;
}
int p2()
{
    printf("ASCII code of '+' is %d",'+');
    printf("\n");
    return 0;
}
int p3()
{
    int x;
    float y;
    char m;
    double d;
    printf("sizeof(x) is %d\n",sizeof(x));
    printf("sizeof(y) is %d\n",sizeof(y));
    printf("sizeof(m) is %d\n",sizeof(m));
    printf("sizeof(d) is %d",sizeof(d));
    printf("\n");
    return 0;
}
int p4()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    
    printf("Result is %d",x-x%10);
    printf("\n");
    return 0;
}
int p5()
{
    int x,digit;
    printf("Enter a number");
    scanf("%d",&x);
    printf("Enter a digit");
    scanf("%d",&digit);
    
    printf("Result is %d",x*10+digit);
    printf("\n");
    return 0;
}