
#include <stdio.h>
#include <conio.h>
int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);
 
    if (x % 5 == 0)
    {
        printf("Divisible by 5.");
    }
    else
    {
        printf("Divisible by 5.");
    }

    getch();
}

/*
NOTE = Agr kisi number ki divisibility check krni hai toh hmesha modulus operator ka istmaal krein

Alternative Program
#include <stdio.h>

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);
 
    if (x % 5)
    {
        printf("The number is not divisible by 5.");
    }
    else
    {
        printf("The number is divisible by 5.");
    }

    return 0;
}
*/





