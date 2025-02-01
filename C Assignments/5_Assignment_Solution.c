#include <stdio.h>
int q1()
{
    int x, sum;

    printf("Enter a three-digit number: ");
    scanf("%d", &x);

    sum = (x / 100) + (x / 10 % 10) + (x % 10); // Last digit:456 % 10 = 6,Second digit = (456 / 10) % 10 = 5,First digit = 456 / 100 = 4,Sum = 4 + 5 + 6 = 15

    printf("The sum of the digits is: %d", sum);

    return 0;
}
int q2()
{
    printf("The ASCII code of '+' is: %d", '+');
    return 0;
}
int q3()
{
    int x;
    float k;
    char c;
    double d;

    printf("size of x is %d\n", sizeof(x));
    printf("size of k is %d\n", sizeof(k));
    printf("size of c is %d\n", sizeof(c));
    printf("size of d is %d\n", sizeof(d));

    return 0;
}
int q4()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    x = x / 10 * 10;

    printf("The number after making the last digit zero is: %d", x);

    return 0;
}
/*
Explanation:
1. Logic to Remove Last Digit :
(a). x / 10 =Number ko 10 se divide karke last digit hata dete hain (integer division se).
(b). * 10 = Resultant number ko 10 se multiply karke last digit ko zero bana dete hain.
2. Example Calculation:
(a). Suppose x = 2345.
(b). x / 10 = 234 (last digit hat gayi).
(c). 234 * 10 = 2340 (last digit zero ho gayi).
3. Output : Modified number ko print karte hain.
*/
int main()
{
    int x, digit;

    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter a digit: ");
    scanf("%d", &digit);
    x = x * 10 + digit;

    printf("The number after appending the digit is: %d", x);
    return 0;
}
/*
Explanation:
x * 10 se number ka last me ek jagah khali hoti hai (e.g., 234 → 2340).
+ digit se us jagah par naya digit aa jata hai (e.g., 2340 + 9 = 2349)

*/