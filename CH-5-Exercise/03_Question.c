// Ques.3.Write a program to print size of an int, a float, a char and a double type variable

#include <stdio.h>
#include <conio.h>
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

    getch();
}