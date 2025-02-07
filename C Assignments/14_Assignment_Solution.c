#include <stdio.h>
// Ques.1.Write a program to calculate factorial of a number. Factorial is the product of first n natural numbers. iska logic bilkul aisa hai jaise sum of n natural numbers ka tha. bs ismein plus ki jagah multiply hoga.

int q1()
{
    int n, i, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("The factorial of %d is: %d", n, fact);

    return 0;
}
// Ques.2. Write a program to count digits in a given number. for example 481 mein kitne digits hain toh ans aaye 3
int q2()
{
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num)
    {
        num = num / 10;
        count++;
    }
    printf("Number of digits: %d", count);

    return 0;
}
int q2alternate()
{
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        count = 1;
    }
    else
    {
        while (num != 0)
        {
            num = num / 10; // Last digit remove karo
            count++;        // Count badhao
        }
    }
    printf("Number of digits: %d", count);

    return 0;
}
/*
Logic:
1. User se ek number input lo.
2. Ek counter variable (count) rakho jisme digits ka count store hoga.
3. Jab tak number 0 na ho jaye, har baar number / 10 karo aur count badhao.
4. Jab number 0 ho jaye, count print kar do.
*/
// Ques.3. Write a program to check whether a given number is a Prime number or not. Prime Number Definition: Ek prime number wahi hota hai jo sirf 1 aur khud se divide hota hai. (e.g., 2, 3, 5, 7, 11...)
int q3()
{
    int n, i;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 2; i < n; i++) // i vo number hai jisse main divide krne vala hu n ko
    {
        if (n % i == 0)
            break;
    }
    if (i == n)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
// Ques.4. Write a program to calculate LCM of two numbers. LCM = Least Common Multiple. LCM is the smallest number that is divisible by both numbers.
int q4()
{
    int a, b, L;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);

    for (L = a > b ? a : b; L <= a * b; L++)

        if (L % a == 0 && L % b == 0)
        {
            printf("LCM is %d", L);
            break;
        }
    return 0;
}
// Ques.5.  Write a program to reverse a given number. For example, 1234 ka reverse 4321 hona chahiye.
int q5()
{
    int n, r, y = 0;
    printf("Enter a number:");
    scanf("%d", &n);

    while (n)
    {
        r = n % 10;
        n = n / 10;
        y = y * 10 + r;
    }
    printf("Reverse is %d", y);

    return 0;
}
int q5alternate()
{
    int num, digit, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num)
    {
        digit = num % 10;               // Last digit nikalna
        reverse = reverse * 10 + digit; // Reverse me add karna
        num = num / 10;                 // Last digit hata dena
    }
    printf("Reversed number: %d", reverse);

    return 0;
}
/*
🔹 Kaise karenge?
1. Last digit nikalna hai → 1234 % 10 = 4
2. Isko ek naye number me daalna hai → reverse = 0 * 10 + 4 = 4
3. Baaki ka number chhota karna hai → 1234 / 10 = 123
4.Yehi kaam har digit ke saath karna hai jab tak number 0 na ho jaye!

📌 Logic:
1. User ek number input karega.
2. Ek reverse variable rakho jo pehle 0 hoga.
3. Loop chalao jab tak number 0 na ho jaye:
(a). Last digit nikalo → num % 10
(b). reverse me add karo → reverse = reverse * 10 + last_digit
(c). Number ko chhota karo → num = num / 10
4. Reverse number print karo!

🔹 Example:
-----------------------------------------------------Step-by-Step Example (num = 123)-----------------------------------------------------------------

Step	     num	          digit = num % 10	           reverse = reverse * 10 + digit	                         num = num / 10
1	         123	                3	                               0 * 10 + 3 = 3	                                   12
2	         12	                    2	                               3 * 10 + 2 = 32	                                    1
3	         1	                    1	                              32 * 10 + 1 = 321	                                    0
🎯 Final Answer: 321!
*/
