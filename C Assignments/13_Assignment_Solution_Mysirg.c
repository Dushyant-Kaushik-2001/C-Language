#include<stdio.h>
void p1()
{
    int n,i,s;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++)
        s+=i;
    printf("Sum is %d",s);
}
void p2()
{
    int n,i,s;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++)
        s=s+2*i;
    printf("Sum is %d",s);
}
void p3()
{
    int n,i,s;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++)
        s=s+2*i-1;
    printf("Sum is %d",s);
}
void p4()
{
    int n,i,s;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++)
        s=s+i*i;
    printf("Sum is %d",s);
}
void p5()
{
    int n,i,s;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++)
        s=s+i*i*i;
    printf("Sum is %d",s);
}