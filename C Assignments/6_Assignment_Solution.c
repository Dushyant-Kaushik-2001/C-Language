#include <Stdio.h>
int q1()
{
    float INR, USD;

    printf("Enter the amount in INR: ");                                                         // INR = Indian Rupees & USD = US Dollars
    scanf("%f", &INR);

    USD = INR / 84.23;

    printf("INR %.2f = USD %.2f", INR, USD);

    return 0;
}
/*
Explanation:
1. User se INR amount input le rahe hain.
2. Conversion formula: USD = INR / 84.23
3. Conversion Logic: INR amount ko 84.23 se divide karke USD mein convert kiya jaata hai.
4. %.2f ka use kiya hai taaki output sirf 2 decimal tak aaye.
*/
int q2()
{
    int x;

    printf("Enter a three-digit number: ");
    scanf("%d", &x);

    x = (x % 10) * 100 + (x / 10);

    printf("The number after rotating its digits is: %d",x);

    return 0;
}
int q3()
{
    int x;
    x= 10>8>4;
    printf("%d",x);
    return 0;
}
int q4()
{
    int x;
    x= !2>-2;
    printf("%d",x);
    return 0;
}
int q5()
{
    int x;
    x= 3<0&&5>0;
    printf("%d",x);
    return 0;
}