#include<stdio.h>
int p1()
{
    int a,b,c;
    float avg;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    avg=(a+b+c)/3.0;
    printf("Average is %f",avg);
    printf("\n");
    return 0;
}
int p2()
{
    int r;
    float c;
    printf("Enter radius: ");
    scanf("%d",&r);
    c=2*3.14*r;
    printf("Circumference is %f",c);
    printf("\n");
    return 0;
}
int p3()
{
    int p,t;
    float r,si;
    printf("Enter P,R and T: ");
    scanf("%d%f%d",&p,&r,&t);
    si=p*r*t/100;
    printf("Simple Interest is %f",si);
    printf("\n");
    return 0;
}
int p4()
{
    int l,b,h,v;
    printf("Enter L,B and H of a Cuboid: ");
    scanf("%d%d%d",&l,&b,&h);
    v=l*b*h;
    printf("Volume is %d",v);
    printf("\n");
    return 0;   
}
int main()
{
    float cp,sp,profit;
    printf("Enter CP and SP of 12 Bananas: ");
    scanf("%f%f",&cp,&sp);
    profit=(sp-cp)/12*25;
    printf("Profit(+ve)/Loss(-ve)=%f",profit);
    printf("\n");
    return 0;
}