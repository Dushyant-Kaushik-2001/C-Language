#include <stdio.h>
int main()
{
    int a = 5, b;
    b = --a;                                                  // Pehle a = a - 1 hoga, fir b = a assign hoga
    printf("%d %d", a, b);                                   // As usual pre decrement ki priorty sabse jyada hai
    return 0;
}






/*
1. Pre-decrement ka matlab hai pehle value ko 1 se kam karna, phir usko use karna.

2. Symbol hai -- (pre-decrement me yeh variable ke aage hota hai).

3. --a ka matlab hai a ki value 1 se kam karo (5 se 4 banegi).
Phir us reduced value ko b me assign karo.

4. Pre-decrement: Pehle decrement, phir use.

*/