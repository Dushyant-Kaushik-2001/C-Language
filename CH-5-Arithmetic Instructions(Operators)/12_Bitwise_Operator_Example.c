#include <stdio.h>
int main()
{
    int x;
    x = 5 & 12;
    printf("%d", x);
    return 0;
}




/*

Output:
The output is 4. 

Bitwise AND applies on 5 and 12. We need to convert them in binary.
                                                                   128 64 32 16 8 4 2 1          (2 ki power 0=1,2 ki power 2=4 and so on)
5  = 00000000 00000000 00000000 00000101                             0  0  0  0 0 1 0 1                 
12 = 00000000 00000000 00000000 00001100                                        1 1 0 0
&    ————————————-----------------------                              _____________________
4  = 00000000 00000000 00000000 00000100                                         0 1 0 0           Ans. is 4


*/