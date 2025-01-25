#include <stdio.h>
int main()
{
    int a, b, c, d;
    a = 3 + 4;
    b = 3 - 4;
    c = 3 * 4;
    d = 3 / 4;
    printf("%d %d %d %d", a, b, c, d);
    return 0;
}

/*
Output is: 
7 -1 12 0 

* The value of a is 7 which is the result of 3+4. 
* The value of b is -1 which is the result of 3-4.
* The value of c is 12 which is the result of 3*4. 
* The value of d is 0 which is the result of 3/4. This may surprise you a bit. 

Maths ke hisab se iska ans aana chaiye 0.75 par c language mein iska ans aayega 0. But Why Aisa Kyu hota hai? 
Aisa isliye hota hai kyunki ek Rule hai. Do integer ke beech mein jab bhi operation kroge to result hmesha integer hi aayega.
This is the rule in C language. 

    o In C, numbers are of two types, real and integer.  
    o When we operate two integers, result will be integer only 
    o So 3/4 is 0 instead of 0.75 (which should be mathematically) 
    o Simply discard decimal point and digits after decimal point, only consider the integer part 
    (left of decimal point) 

* At least one operand is real, the result will be real 
     o The result of 3.0/4 is 0.75 
     o The result of 3/4.0 is 0.75 
     o The result of 3.0/4.0 is 0.75 

* Someone might have this confusion that what if we take variable of type float or double to store the result of 3/4, 
would it leads to the mathematically correct result. 

#include<stdio.h>
int main()
{
float d;
d=3/4;
printf("%f",d);
}
 
The output of above program is 0.000000 
o The result contains decimal representation due to %f format specifier 
o Since in the expression d=3/4, divide operator has higher precedence than assignment operator, division performs first. 
3 and 4 both are integers therefore outcome can only be integer value. Resulting expression becomes d=0;


*/