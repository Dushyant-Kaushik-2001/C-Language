// Ques.13. Write a program to print greater among three numbers. Print only the greater number.
// Ques.13.Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.

#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c, max;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Greater number is: %d", max);

    getch();
}


/*
Max = (a > b)
        |
    True ------> (a > c) ? a : c
    False ------> (b > c) ? b : c


Step-by-Step Explanation:

1. Input lena = User se a, b, aur c input lete hain.For Example input liya hai 5, 8, 7.

2. Ternary Operator ka use:
(a). Pehle (a > b) check hota hai. Agar a > b true hota hai, toh (a > c) check karega. Agar false hota hai, toh (b > c) check karega.
(b). Inner Check:
1. (a > c):
Agar true, toh max = a.
Agar false, toh max = c.

2. (b > c):
Agar true, toh max = b.
Agar false, toh max = c.

3. Example ke liye:

(a). Input: a = 5, b = 8, c = 7.
(b). Pehla check: 5 > 8 → False.
(c). Dusra check: (8 > 7) → True.
(d). Result: max = 8.

4. Output = Sabse bada number 8 print karega.



Ques.What is Ternary?
Ans.Ternary operator ek shorthand hai jo conditional statements ko simple aur compact banata hai. 
Yeh ek line mein condition check karke result de deta hai. Iska format aur kaam bahut hi simple hai.
Syntax:

condition ? expression1 : expression2;

1. condition: Yeh ek logical condition hai (e.g., a > b).
2. expression1: Agar condition true ho, to yeh execute hoga.
3. expression2: Agar condition false ho, to yeh execute hoga.


*/
