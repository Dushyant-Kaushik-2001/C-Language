/*
--------------------------------------------------------sizeof operator----------------------------------------------------------------------------

1. It is also a keyword. 
2. sizeof operator takes one operand as it is unary operator and tells its size in bytes.
3. Operand of sizeof can be a data type, variable or constant.
4. sizeof operator C mein kaafi useful aur special operator hai. 
Iska kaam hai kisi variable, data type, ya object ki memory size (bytes mein) batana.
5. Ye ek compile-time operator hai, matlab ye compile hone ke waqt size calculate karta hai.
6. Syntax:

sizeof(data_type or variable)

*/

#include <stdio.h>

int main()
{
    int x;
    float k;
    char ch;
    double d;

    printf("%d", sizeof(int));
    printf("\n%d", sizeof(float));
    printf("\n%d", sizeof(char));
    printf("\n%d", sizeof(double));

    printf("\n%d", sizeof(x));
    printf("\n%d", sizeof(k));
    printf("\n%d", sizeof(ch));
    printf("\n%d", sizeof(d));

    printf("\n%d", sizeof(21));                             // Integer constant are by default of type int
    printf("\n%d", sizeof(3.5));                           // Real constant are by default of type double
    printf("\n%d", sizeof('A'));                          //  Charcater constant are by default of type int
    printf("\n%d", sizeof(4.5f));

    return 0;
}