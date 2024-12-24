#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    scanf("%d",&a);                                 // &(ampersand)=address of
    printf("a=%d",a);
    getch();
}



/*
Remember: 
1. Use proper format specifier in printf and scanf, according to the need and type of variable 
2. Do not forget to use address of (&) operator in scanf before variable name 
3. Do not write any symbol between two %d when used in scanf, like comma, it will then not work according to expectation.


*/
