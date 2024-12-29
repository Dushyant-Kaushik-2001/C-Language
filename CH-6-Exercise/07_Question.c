// Ques.7. Write a program to to find greater among three numbers.

#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c, k;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
            k = a;
        else
            k = c;
    }

    else
    {
        if (b > c)
            k = b;
        else

            k = c;
    }
    printf("Greater number is: %d", k);

    getch();
}

/*

Alternative Programs:
1.
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c,k;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a,&b,&c);

    if (a > b && a > c)
    {
        k = a;
    }
    else if (b > c)
    {
        k = b;
    }
    else
    {
        k = c;
    }
    printf("Greater number is: %d",k);

    getch();
}

2.
if (a > b && a > c)

    k = a;

 if (b > a && b > c)

    k = b;

if ( c > a && c > b)

    k = c;


3.
if (a > b && a > c)

    k = a;

else
{
if (b > a && b > c)

    k = b;

if ( c > a && c > b)

    k = c;
}

4.
if (a > b && a > c)

    k = a;

else{
    if (b > c)
        k = b;

    else
      k = c;
   }

4. Using Conditional Operator:

#include<stdio.h>
int main
{
int a, b, c, k;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    k = a>b ? a>c?a:c : b>c?b:c;
    printf("Greater number is: %d", k);

    getch();
}


*/