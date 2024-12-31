// Ques.9. Write a program to check whether a given number is divisible by 7 or divisible by 3.
// check karna hai ki diya gaya number 7 ya 3 se divisible hai ya nahi

#include <stdio.h>
#include <conio.h>
int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x % 7 == 0 || x % 3 == 0)                  // is ques mein hai last mein or matlab OR Operator (||)ka use karna hai
    {
        printf("Divisible by both 7 and 3", x);
    }
    else
    {
        printf("Not Divisible by both 7 and 3", x);
    }

    getch();
}

/*
Explaination:

1. Yaha pe humne user se ek number input liya hai.
2. if (number % 7 == 0 || number % 3 == 0) yeh check karta hai ki number 7 ya 3 se divisible hai.
3. Agar || (OR) ki condition true hai, toh print karta hai ki number divisible hai.
4. Agar || (OR) ki condition false hai, toh print karta hai ki number kisi se divisible nahi hai.

**********************************************Alternate Solution:*************************************************************************
Hum yaha pe multiple if statements bhi use kar sakte the.like:

#include<stdio.h>
#include<conio.h>
int main()
{
if (x % 7 == 0)
  {
    printf("Divisible by 7", x);
 }
if (x % 3 == 0)
  {
    printf("Divisible by 3", x);
  }
else
    {
    printf("Not Divisible by 7 or 3", x);
    }
getch();
}

Program ka kaam:
Ek number input lo.
Agar number % 7 == 0, toh print karo ki number 7 se divisible hai.
Agar number % 3 == 0, toh print karo ki number 3 se divisible hai.
Agar dono nahi, toh print karo ki number na 7 se divisible hai na 3 se.


*/
