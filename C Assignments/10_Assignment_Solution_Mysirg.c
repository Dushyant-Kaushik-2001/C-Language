#include<stdio.h>
int p1()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x>0)
        printf("Positive");
    else if(x<0)
        printf("Negative");
    else
        printf("zero");
        printf("\n");
        return 0;
}
int p2()
{
    char x;
    printf("Enter a character");
    scanf("%c",&x);
    if(x>='a'&& x<='z')
        printf("Lowercase alphabet");
    else if(x>='A' && x<='Z')
        printf("Uppercase alphabet");
    else if(x>='0' && x<='9')
        printf("Digit");
    else
        printf("Other character");
    printf("\n");
    return 0;
}
int p3()
{
    int a,b,c;
    printf("Enter lengths of sides of a traingle");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
        printf("Valid Traingle");
    else
        printf("Invalid Triangle");
    printf("\n");
    return 0;
}
int p4()
{
    int month;
    printf("Enter Month Number");
    scanf("%d",&month);
    if(month==2)
        printf("28 or 29 days");
    else if(month==4 || month==6 || month == 9 || month==11)
        printf("30 days");
    else if(month<1 || month>12)
        printf("Invlaid month number");
    else
        printf("31 Days");
    printf("\n");
    return 0;
}