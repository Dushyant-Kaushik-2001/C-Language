// Ques.9.Write a program with one char type variable. Assign ‘A’ in the variable. Now Change the value of variable from ‘A’ to ‘B’ using increment operator.

#include <stdio.h>
#include <conio.h>
int main()
{
    char ch = 'A';                                                        // Initialize variable with 'A'
    printf("Initial value of ch: %c\n", ch);

    ch++;                                                                 // Increment the value of ch
    printf("Value of ch after increment: %c", ch);

    getch();
}




/*

Explanation:

1. Initialization = Variable ch ko 'A' ke saath initialize kiya gaya.

2. Increment Operator (++) = ch++ ka matlab hai, ch ke value ko uski ASCII value ke basis par 1 increment karna.
ASCII table mein 'A' ka value 65 hoti hai, aur 'B' ka value 66. Increment karne par 'A' se 'B' ho jata hai.

3. Output = Program pehle 'A' ko print karega aur increment ke baad 'B'.

*/

