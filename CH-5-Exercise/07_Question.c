//Ques.7.Write a program to calculate size of a Real constant.

#include <stdio.h>
#include <conio.h>
int main()
{
    float f;
    double d;
    long double ld;
    printf("Size of Real constant is %d bytes\n", sizeof(f));
    printf("Size of Real constant is %d bytes\n", sizeof(d));
    printf("Size of Real constant is %d bytes", sizeof(ld));

    getch();
}







/*
Ques. What is Real Constant in C?
Ans. C mein real constant ya floating-point constant ek aisa constant hota hai jo decimal value ko represent karta hai,
yani koi bhi aisi value jo fractional part ke saath ho.
Real constants ko float, double, ya long double data types mein store kiya jata hai.

*****************************************************Real Constant Types**********************************************************************

C language mein real constants ko 3 types mein represent kiya jata hai:

(1).Float Constants = Yeh constants float type ko represent karte hain.Inhe hum f ya F suffix ke saath likhte hain.
Example: 3.14f, -2.5F

(2).Double Constants = Yeh constants double type ko represent karte hain, jo ki zyada precise hote hain float ke comparison mein.
Yeh by default hoti hain jab koi decimal value likhi jati hai.
Example: 3.14159, -0.0001

(3).Long Double Constants = Yeh constants long double type ko represent karte hain aur zyada precision provide karte hain double se bhi.
Inhe L ya l suffix ke saath likha jata hai.
Example: 3.14159265358979L

****************************************************Real Constants Properties*************************************************************

(A). Precision:

1. float < double < long double
2. float zyada precise nahi hota, aur uska size 4 bytes hota hai.
3. double zyada precise hota hai, aur uska size 8 bytes hota hai.
4. long double sabse zyada precise hota hai, aur uska size system ke hisaab se 12 ya 16 bytes ho sakta hai.

NOTE = Agar hum koi decimal number likhte hain bina kisi suffix ke (jaise 3.14), to C ise by default double type samajhta hai
aur uska size 8 bytes hota hai. Agar hum ise float type mein store karna chahte hain, to hume iske saath f ya F suffix dena padega.

(B). Real Constant Example:

1. 3.14f — Yeh ek float constant hai.
2. 3.14 — Yeh ek double constant hai (by default double hota hai).
3. 3.14159 — Yeh ek double constant hai (suffix nahi diya gaya, isliye default double hota hai).
4. 14159265358979L — Yeh ek long double constant hai.

*/

