#include<stdio.h>
void p1()
{
    int i,n;
    for(n=2;n<=100;n++)
    {
        for(i=2;i<n;i++)
            if(n%i==0)
                break;
        if(i==n)
            printf("%d ",n);
        
    }
}
void p2()
{
    int i,n,a,b;
    printf("Enter lower and upper limit: ");
    scanf("%d%d",&a,&b);
    for(n=a+1;n<b;n++)
    {
        for(i=2;i<n;i++)
            if(n%i==0)
                break;
        if(i==n)
            printf("%d ",n);
        
    }
}
void p3()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    n++;
    while(1)
    {
        for(i=2;i<n;i++)
            if(n%i==0)
                break;
        if(i==n)
            break;
        n++;
    }
    printf("%d ",n);
}
void p4()
{
    int a,b,H;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    for(H=a<b?a:b;H>=1;H--)
        if(a%H==0 && b%H==0)
            break;
    printf("HCF is %d",H);
}
void p5()
{
    int a,b,H;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    for(H=a<b?a:b;H>=1;H--)
        if(a%H==0 && b%H==0)
            break;
    if(H==1)
        printf("Co-Prime");
    else
        printf("Not co-prime");
}
int main()
{
    p2();
    printf("\n");
    return 0;
}