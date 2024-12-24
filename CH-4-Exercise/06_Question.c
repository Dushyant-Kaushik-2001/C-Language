//Write a C program to print %d on the screen

#include <stdio.h>

int main() 
{
    printf("%%d");                 // phla % hai indicator jo ki doosro ka meaning change krega
    return 0;                      // doostra % vo hai jiska meaning change ho ra hai
}

/*

Explanation:

1. %% = In C, % is used as a format specifier. To print a literal %, we need to escape it by writing %%.

2. d = This is printed as a normal character since it follows the escaped %.

3. printf("%%d"); = Prints %d literally on the screen.

*/