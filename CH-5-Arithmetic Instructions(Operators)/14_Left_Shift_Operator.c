#include<stdio.h>
int main()
{
 int x;
 x = 12 << 2;                            
 printf("%d",x);
 return 0;
}


/*

In the case of left shift, everything is same except that the shifting of bits is towards left.

Convert 12 into binary and shift bits to their left 2 times. This makes last two left most bits out and two new bits (always 0) append at 
the right. 

12 = 00000000 00000000 00000000 00001100 
Left shift two times                                      // Right side se do 0 jod do aur left side se do 0 hta do
48 = 00000000 00000000 00000000 00110000 
ab bacha 11 to ye kya hai 16+32=48                          // 128 64 32 16 8 4 2 1          (2 ki power 0=1,2 ki power 2=4 and so on)
toh ans is 48.



*/