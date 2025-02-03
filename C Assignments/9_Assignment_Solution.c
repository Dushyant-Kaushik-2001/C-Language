#include <stdio.h>
// Ques.1.Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
int main()
{
    float cp, sp, percent;
    printf("Enter cost price and selling price: ");
    scanf("%f%f", &cp, &sp);

    if (cp <= sp)
    {
        percent = (sp - cp) / cp * 100;
        printf("Profit percentage is %.2f%%", percent); // %% → Ek % print karne ke liye double %% likhna padta hai.
    }
    else if
    {
        percent = (cp - sp) / cp * 100;
        printf("Loss percentage is %.2f%%", percent);
    }
    else
    {
        printf("No profit no loss");
    }
    return 0;
}
/*
Explaination:
1. Agar Selling Price (SP) zyada hai Cost Price (CP) se, toh Profit hoga.
Profit ka formula: sp-cp
Profit percentage ka formula: (sp-cp)/cp*100

2. Agar Selling Price (SP) kam hai Cost Price (CP) se, toh Loss hoga.
Loss ka formula: cp-sp
Loss percentage ka formula: (cp-sp)/cp*100
*/
// Ques.2.Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.
int q2()
{
    int m1, m2, m3, m4, m5;
    printf("Enter marks of 5 subjects: ");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    if (m1 >= 33 && m2 >= 33 && m3 >= 33 && m4 >= 33 && m5 >= 33)
    {
        printf("PASS");
    }
    else
    {
        printf("FAIL");
    }
    return 0;
}
// Ques.3. Write a program to check whether a given alphabet is in uppercase or lowercase.
int q3()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("UPPERCASE ");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("LOWERCASE");
    }
    else
    {
        printf("Not a valid letter");
    }
    return 0;
}
// Ques.4. Write a program to check whether a given number is divisible by 3 and divisible by 2. check karna hai ki diya gaya number 3 aur 2 dono se divisible hai ya nahi
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 2 == 0)
        printf("Yes, it is divisible by 2 and 3");
    else
        printf("No, it is not divisible by both 2 and 3");

    return 0;
}
// Ques.5. Write a program to check whether a given number is divisible by 7 or divisible by 3. check karna hai ki diya gaya number 7 se divisible hai ya 3 se divisible hai.
int q5()
{
    int num;
    printf("Enter a number");
    scanf("%d", &num);

    if (num % 7 == 0 || num % 3 == 0)
        printf("Yes, it is divisible by 7 or 3");
    else
        printf("No, it is not divisible by any one from 7 and 3");

    return 0;
}