#include<stdio.h>
int p1()
{
    char x;
    printf("Enter a character: ");
    scanf("%c",&x);
    printf("%c - %d",x,x);
    printf("\n");
    return 0;
}
int p2()
{
    char x;
    printf("Enter an ASCII code: ");
    scanf("%d",&x);
    printf("%d - %c",x,x);
    printf("\n");
    return 0;
}
int p3()
{
    char a,b,c;
    printf("Enter three characters: ");
    scanf("%c-%c-%c",&a,&b,&c);
    printf("%c - %d\n",a,a);
    printf("%c - %d\n",b,b);
    printf("%c - %d",c,c);
    printf("\n");
    return 0;
}
int p4()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    printf("Last digit of %d is %d",x,x%10);
    printf("\n");
    return 0;
}
int p5()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    printf("%d without last digit is %d",x,x/10);
    printf("\n");
    return 0;
}