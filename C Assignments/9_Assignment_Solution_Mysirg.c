#include<stdio.h>
int p1()
{
    float cp,sp,p;
    printf("Enter cost price and selling price: ");
    scanf("%f%f",&cp,&sp);
    if(cp<=sp)
    {
        p=(sp-cp)/cp*100;
        printf("Profit percentage is %0.2f%%",p);
    }
    else
    {
        p=(cp-sp)/cp*100;
        printf("Loss percentage is %0.2f%%",p);
    }
    printf("\n");
    return 0;
}
int p2()
{
    int m1,m2,m3,m4,m5;
    printf("Enter marks of 5 subjects: ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    if(m1>=33 && m2>=33 && m3>=33 && m4>=33 && m5>=33)
    {
        printf("PASS");
    }
    else
    {
        printf("FAIL");
    }
    printf("\n");
    return 0;

}
int p3()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
        printf("UPPERCASE ");
    else if(ch>='a'&& ch<='z')
        printf("LOWERCASE");
    printf("\n");
    return 0;
}
int p4()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    if(num%3==0 && num%2==0)
        printf("Yes, it is divisible by 2 and 3");
    else
        printf("No, it is not divisible by both 2 and 3");
    printf("\n");
    return 0;
}
int p5()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    if(num%7==0 || num%3==0)
        printf("Yes, it is divisible by 7 or 3");
    else
        printf("No, it is not divisible by any one from  7 and 3");
    printf("\n");
    return 0;
}