#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);                                      // scanf mein jo do %d%d hain inke beech mein comma mhi lgega
    printf("a=%d b=%d", a, b);
    return 0;
}





/*
-------------------------------------------------------Remember---------------------------------------------------------------------------

1. We can input more than one value using single scanf statement.

2. Use proper format specifier in printf and scanf, according to the need and type of variable.

3. Do not forget to use address of (&) operator in scanf before variable name. 

4. Do not write any symbol between two %d when used in scanf, like comma, it will then not work according to expectation.

*/