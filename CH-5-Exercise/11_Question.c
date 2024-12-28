// Ques.11. Write a program to swap values of two int variables.

#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;

    printf("Enter Two numbers: ");
    scanf("%d%d", &a, &b);

    c = a;
    a = b;
    b = c;

    printf("a = %d b = %d ", a, b);

    getch();
}



/*

Explanation:   

1. User Input: User se do integers input liye jaate hain.    

2. Swapping: Do variables ke values ko swap karne ke liye ek temporary variable (c) ka use kiya jata hai.

3. Swapping Logic:
(a). c = a: Temporary variable c mein a ki value store ki jaati hai.
(b). a = b: a ko b ke value se update kiya jaata hai.
(c). b = c: b ko c (original a) ke value se update kiya jaata hai.

4. Output: Swapped values ko print kiya jaata hai.

*/