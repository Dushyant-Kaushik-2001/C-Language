// Ques.22. Write a C program containing declaration of three variables (of type int, char and float), also assign some values to them and print values of all three variables using single printf().

#include <stdio.h>
#include <conio.h>
int main()
{
    int num = 25;                      // Integer variable
    char letter = 'A';                 // Character variable
    float decimal = 3.14;              // Float variable

    printf("Integer: %d, Character: %c, Float: %.2f", num, letter, decimal);

    getch();
}


// %.2f is a placeholder for a floating-point number, formatted to two decimal places.
