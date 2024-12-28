// Ques.13.Write a program to swap values of two integer variables data without using third variable and without using arithmetic operators(+,-).

#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Swap using bitwise XOR
    a = a ^ b; // Step 1
    b = a ^ b; // Step 2
    a = a ^ b; // Step 3

    printf("a = %d b = %d", a, b);

    getch();
}


/*

Explanation of XOR Method:

Step 1 : a = a ^ b;
XOR operation se a mein dono variables ka combined value store hota hai.

Step 2 : b = a ^ b;
Ab b ko XOR karte hain a ke naye value ke saath, jo effectively b ko a ke original value mein badal deta hai.

Step 3: a = a ^ b;
Phir a ko XOR karte hain b ke naye value ke saath, jo effectively a ko b ke original value mein badal deta hai.

*/