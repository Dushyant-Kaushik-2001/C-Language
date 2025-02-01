#include <stdio.h>
int q1()
{
    char x;
    printf("Enter a character: ");
    scanf("%c", &x);
    printf("The ASCII code of '%c' is %d", x, x);
    return 0;
}
int q2()
{
    char x;
    printf("Enter an ASCII code: ");
    scanf("%d", &x);
    printf("The character of ASCII code %d is '%c'", x, x);
    return 0;
}
int q3()
{
    char a, b, c;
    printf("Enter three characters: ");
    scanf("%c %c %c", &a, &b, &c); // The space before %c is important to skip the newline character
    printf("The ASCII code of '%c' is %d\n", a, a);
    printf("The ASCII code of '%c' is %d\n", b, b);
    printf("The ASCII code of '%c' is %d\n", c, c);
}
int q4()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Last digit of %d is %d", x, x % 10);
    return 0;
}
int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);
    printf("The number %d without the last digit is %d", x, x / 10);
    return 0;
}