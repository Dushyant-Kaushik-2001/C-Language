#include <stdio.h>

int q1()
{
    int x = 5;
    if (x > 0)
    {
        printf("Hello");
    }
    printf("%d", x);
    return 0;
}
// Output: Hello5

int q2()
{
    int x = 0;
    if (x)                                  // Every non-zero value is true and zero is false.
    {
        printf("Hello");
    }
    {                                       
        printf("Hello");
    }
    {
        printf("Hello");
    }
    printf("%d", x);
    return 0;
}
// Output: 0

int q3()
{
    int x = 0;
    if (x == 0)
    {
        printf("Hello");
    }
    printf("%d", x);
    return 0;
}   
// Output: Hello0

int q4()
{
    int x = 5;
    if (x = 4)                           
    {
        printf("Hello");
    }
    else
    {
        printf("Bye");
    }
    printf("%d", x);
    return 0;
}
// Output: Hello4


