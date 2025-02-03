#include<stdio.h>
void p1()
{
    int n;
    int i=1;
    printf("Enter a number");
    scanf("%d",&n);

    while(i++<=n)
        printf("MySirG\n");
}
void p2()
{
    int n,i=1;
    printf("Enter a number");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i);
        i++;
    }
}
void p3()
{
    int n,i=1;
    printf("Enter a number");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",11-i);
        i++;
    }
}
void p4()
{
    int n,i=1;
    printf("Enter a number");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",2*i-1);
        i++;
    }
    
}
void p5()
{
    int i=1,n;
    printf("Enter a number");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",2*n+1-2*i);
        i++;
    }
    
}
void p6()
{
    int i=1,n;
    printf("Enter a number");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",2*i);
        i++;
    }
    
}
void p7()
{
    int i=1,n;
    printf("Enter a number");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",2*n+2-2*i);
        i++;
    }
    
}
void p8()
{
    int i=1,n;
    printf("Enter a number");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i*i);
        i++;
    }
}
void p9()
{
    int i=1,n;
    printf("Enter a number");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i*i*i);
        i++;
    }
}
void p10()
{
    int i=1,n;
    printf("Enter a number");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d x %d = %d\n",n,i,i*n);
        i++;
    }
}
int main()
{
    p1();
    printf("\n");
    return 0;
}