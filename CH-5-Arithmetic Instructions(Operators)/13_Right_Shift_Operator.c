#include <stdio.h>
int main()
{
    int x;
    x = 12 >> 2;                                                 // yha par sirf hume left operand ka hi binary karna hota hai
    printf("%d", x);
    return 0;
}



/*

In the expression 12>>2; we need to convert 12 into its binary and perform right shift two times.

Convert 12 into binary and shift bits to their right 2 times. This makes last two bits out and two new bits (always 0) append at the left.

12 = 00000000 00000000 00000000 00001100 
Right shift two times                                      // left side se do 0 jod do aur right side se do 0 hta do
3 = 00000000 00000000 00000000 00000011                    // 128 64 32 16 8 4 2 1          (2 ki power 0=1,2 ki power 2=4 and so on)
ab bacha 11 to ye kya hai 1+2=3
toh ans is 3.


*/