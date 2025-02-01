#include <stdio.h>
// Ques.1.Write a program to check whether a given number is positive or non-positive.
int q1()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x > 0)
    {
        printf("Positive");
    }
    else
    {
        printf("Non-positive");
    }

    return 0;
}
// Ques.2. Write a program to check whether given number is divisible by 5 or not
int q2()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x % 5) // NOTE = Agr kisi number ki divisibility check krni hai toh hmesha modulus operator ka istmaal krein
    {
        printf("Not Divisible by 5.");
    }
    else
    {
        printf("Divisible by 5.");
    }

    return 0;
}
// Ques.3.Write a program to check whether a given number is an even number or an odd number.
int q3()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x % 2) // Kabhi bhi divide(/) operator se divisibility check nhi kra ja sakti Hume iske liye use krna hota hai modulous(%) operator.

    {
        printf("odd");
    }
    else
    {
        printf("Even");
    }

    return 0;
}
// Ques.4. Write a program to check whether a number is even or odd without using modulus(%) operator?
int q4()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x / 2 * 2 == x) 
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

    return 0;
}
// Ques.5.Write a program to check whether a given number is even or odd using a bitwise operator?
int q5()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x & 1)
    {
        printf("The number is odd.");
    }
    else
    {
        printf("The number is even.");
    }

    return 0;
}
/*
Logic:
1. Bitwise AND (&) operator ka use karenge.
2. Kisi bhi number ka least significant bit (LSB) batata hai ki number even hai ya odd:
(a). Even number ka LSB (binary) hamesha 0 hota hai (e.g., 4 -> 100, 8 -> 1000)
(b). Odd number ka LSB(binary) hamesha 1 hota hai (e.g., 3 -> 11, 7 -> 111)
3. x & 1 ka result:
(a). Agar x & 1 == 0, toh number even hai.
(b). Agar x & 1 == 1, toh number odd hai.

Why Use Bitwise Operator?
Normal % operator bhi kaam karega (n % 2 == 0 for even), but bitwise & operator zyada fast hota hai CPU ke liye.
x & 1 sirf LSB ko check karta hai, jo ek efficient method hai even-odd check karne ke liye.
*/
// Ques.6. Write a program to to find greater between two numbers?
int q6()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    if (a > b)

        printf("%d is greater", a);

    else

        printf("%d is greater", b);

    return 0;
}
// Ques.7. Write a program to to find greater among three numbers.
int q7()
{
    int a, b, c, k;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
            k = a;
        else
            k = c;
    }

    else
    {
        if (b > c)
            k = b;
        else

            k = c;
    }
    printf("Greater number is: %d", k);

    return 0;
}
// Alternative Programs:
int q8()
{
    int a, b, c,k;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a,&b,&c);

    if (a > b && a > c)
    {
        k = a;
    }
    else if (b > c)
    {
        k = b;
    }
    else
    {
        k = c;
    }
    printf("Greater number is: %d",k);

    return 0;
}
// Using Conditional Operator:
int q9()
{
int a, b, c, k;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    k = a>b ? a>c?a:c : b>c?b:c;
    printf("Greater number is: %d", k);

    return 0;
}


