#include<stdio.h>
void p1()
{
    int i=1;
    while(i++<=5)
        printf("MySirG\n");
}
void p2()
{
    int i=1;
    while(i<=10)
    {
        printf("%d ",i);
        i++;
    }
}
void p3()
{
    int i=1;
    while(i<=10)
    {
        printf("%d ",11-i);
        i++;
    }
}
void p4()
{
    int i=1;
    while(i<=10)
    {
        printf("%d\n",2*i-1);
        i++;
    }
    
}
void p5()
{
    int i=1;
    while(i<=10)
    {
        printf("%d\n",21-2*i);
        i++;
    }
    
}
void p6()
{
    int i=1;
    while(i<=10)
    {
        printf("%d\n",2*i);
        i++;
    }
    
}
void p7()
{
    int i=1;
    while(i<=10)
    {
        printf("%d\n",22-2*i);
        i++;
    }
    
}
void p8()
{
    int i=1;
    while(i<=10)
    {
        printf("%d ",i*i);
        i++;
    }
}
void p9()
{
    int i=1;
    while(i<=10)
    {
        printf("%d ",i*i*i);
        i++;
    }
}
void p10()
{
    int i=1;
    while(i<=10)
    {
        printf("5 x %d = %d\n",i,i*5);
        i++;
    }
}
int main()
{
    p10();
    printf("\n");
    return 0;
}