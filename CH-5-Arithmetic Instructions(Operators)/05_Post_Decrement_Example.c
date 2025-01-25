#include <stdio.h>
int main()
{
    int a = 5, b;                                                          // As usual post decrement ki priorty sabse kam hai
    b = a--;                                                              // x = x-1
    printf("%d %d", a, b);
    return 0;
}



/*
1. Post-decrement ka matlab hai pehle variable ko use karo, phir uski value 1 se kam karo. 

2. Symbol hai -- (post-decrement me yeh variable ke baad hota hai).

3. a-- ka matlab hai pehle a ki current value b me assign karo.
Phir a ki value ko 1 se kam kar do (5 se 4).

4. Post-decrement: Pehle variable ki value use hoti hai, phir value decrement hoti hai.


*/