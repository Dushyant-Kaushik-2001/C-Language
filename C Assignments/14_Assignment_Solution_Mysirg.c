void p1()
{
    int n,f,i;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1,f=1;i<=n;i++)
        f=f*i;
    printf("Factorial is %d",f);
}
void p2()
{
    int num,count=0;
    printf("Enter a number");
    scanf("%d",&num);
    while(num)
    {
        num=num/10;
        count++;
    }
    printf("Total digits are %d",count);
}
void p3()
{
    int n,i;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }
    if(i==n)
        printf("Prime");
    else
        printf("Not Prime");
}
void p4()
{
    int a,b,L;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    for(L=a>b?a:b;L<=a*b;L++)
        if(L%a==0 && L%b==0)
        {
            printf("LCM is %d",L);
            break;
        }
}
void p5()
{
    int n,r,y=0;
    printf("Enter a number");
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        n=n/10;
        y=y*10+r;
    }
    printf("Reverse is %d",y);
}
int main()
{
    p1();
    printf("\n");
    return 0;
}