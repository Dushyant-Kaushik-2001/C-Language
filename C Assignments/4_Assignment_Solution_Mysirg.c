#include<stdio.h>
int p1()
{
    printf("Size is %d",sizeof('A'));
    printf("\n");
    return 0;
}
int p2()
{
    printf("Size is %d",sizeof(4.5));
    printf("\n");
    return 0;
}
int p3()
{
    char ch='A';
    ch++; //ch=ch+1
    printf("%c",ch);
    printf("\n");
    return 0;
}
int p4()
{
    int x,y,z;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    z=x;
    x=y;
    y=z;
    printf("%d %d",x,y);
    printf("\n");
    return 0;
}
int p5()
{
    int x,y;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("%d %d",x,y);
    printf("\n");
    return 0;
}
int p6()
{
    int x,y;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    x=x*y;
    y=x/y;
    x=x/y;
    printf("%d %d",x,y);
    printf("\n");
    return 0;
}
int p7()
{
    int x,y;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    x=x^y;
    y=x^y;
    x=x^y;
    printf("%d %d",x,y);
    printf("\n");
    return 0;
}
int main()
{
    int x,y;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    x=x+y - (y=x);
    printf("%d %d",x,y);
    printf("\n");
    return 0;
}