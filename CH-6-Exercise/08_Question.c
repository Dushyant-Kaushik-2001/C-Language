// Ques.8. Write a program to check whether a given number is divisible by 3 and divisible by 2.
// check karna hai ki diya gaya number 3 aur 2 se divisible hai ya nahi

#include <stdio.h>
#include <conio.h>
int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x % 3 == 0 && x % 2 == 0)
    {
        printf("Divisible by both 3 and 2", x);
    }
    else
    {
        printf("Not Divisible by both 3 and 2", x);
    }

    getch();
}

/*
Program ka kaam:

1. User se ek number input liya jaata hai.
2. if (number % 3 == 0 && number % 2 == 0) condition check karti hai ki number 3 aur 2 dono se divisible hai.
3. && operator ka matlab hai "aur" (AND). Dono conditions true honi chahiye.
4. Agar condition true hai, toh program batata hai ki number divisible hai.
5. Agar condition false hai, toh program batata hai ki number divisible nahi hai.

**********************************************Alternate Solution:*************************************************************************
Hum yaha pe multiple if statements bhi use kar sakte the.like:

#include<stdio.h>
#include<conio.h>
int main()
{
if (x % 3 == 0)
  {
    printf("Divisible by 3", x);
 }
if (x % 2 == 0)
  {
    printf("Divisible by 2", x);
  }
else
    {
    printf("Not Divisible by 3 or 2", x);
    }
getch();
}


Program ka kaam:
Ek number input lo.
Agar number % 3 == 0, toh print karo ki number 3 se divisible hai.
Agar number % 2 == 0, toh print karo ki number 2 se divisible hai.
Agar dono nahi, toh print karo ki number na 3 se divisible hai na 2 se.















*/