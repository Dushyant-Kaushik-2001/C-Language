/*
----------------------------------------------Unary Operators (+,-,++,--,sizeof)------------------------------------------------------------

Unary operators require only one operand to perform their operation.


1.*********************************************Unary + and unary -************************************************************************

These are not addition or subtraction operators, but they are unary plus and unary minus, used to indicate sign of a number.
For example: -3, +5


2.***********************************************Increment Operator ++*********************************************************************

(a). Increment operator increases value of the operand by 1.

For Example:

#include <stdio.h>
int main()
{
    int x = 3;
    x++;                                           // x++ is post increment(priority sabse kam) , x=x+1
    printf("%d", x);
    return 0;
}

Output:
In the above program x is a variable containing 3 initially. In the next step increment operator is used to increase its value by one. 
The updated value of x is now 4, so the output of the program is 4.

(b). We can also use operator before operand.
For Example:

#include <stdio.h>
int main()
{
    int x = 3;
    ++x;                                            // ++x is pre increment(priority sabse jyada) , x=x+1
    printf("%d", x);
    return 0;
}
Output:
The output of the above program is also 4.
Both the styles of using increment operator (x++ is post increment and ++x is pre increment) have the same function 
but with different priorities.

(c). Pre increment has high priority among all the operators but post increment has the least priority among all the operators, 
even less than the assignment operators.

Post Increment Example:

#include<stdio.h>
int main()
{
int x = 3 , y;
y = x++;                          // yha par do operator hai phla assignment aur doosra post increment to phle chalega assigment kyunki post increment ki priority sabse kam hai
printf("%d %d", x , y);           // assignment chalega to phle x ki value copy hogi y mein toh y mein hoga copy 3 toh y=3
return 0;                         // ab chalega post increment toh post increment kis par lga hua yani operand kon hai iska x toh x ki value ko 1 se increase krega toh x ki value ho jaayegi 4
}

Output:
Try to evaluate the output of above code.
1. Initially x contains 3.
2. In the expression y=x++; post increment has low priority than assignment operator, thus value of x is copied to y.
3. Now x and y both contains 3.
4. Increment operator works on x. Value of x becomes 4.
5. Final value of x is 4 and y is 3, so the output is 4 3 .

Pre Increment Example:

#include<stdio.h>
int main()
{
int x = 3 , y;
y = ++x;
printf("%d %d", x , y);
return 0;
}

Output:
1. Initially x contains 3.
2. In the expression y=++x; pre increment has higher priority than assignment operator, thus value of x is incremented to 4.
3. Now x contains 4.
4. Value of x is copied to y, which is 4 at this moment.
5. Final value of x is 4 and y is 4, so the output is 4 4.


3.***********************************************Decrement operator --***********************************************************************

(a) The job of decrement operator is to decrease value of the operand by one. 
Just like increment operator,decrement operator can be used either before operand or after operand.

(b) x--; post decrement 
    --x; pre decrement.

(c) Priority of pre decrement is high among all the operators and priority of post decrement operator is least among all the operators.

(d) Post decrement example:

#include<stdio.h>
int main()
{
int x = 3 , y;                                                    //As usual post decrement ki priorty sabse kam hai
y = x--;                                                           // x = x-1
printf("%d %d", x , y);
return 0;
}

Output:
The output of above code is 2 3

(e) Pre decrement Example :

#include<stdio.h>
int main()
{                                                                    ////As usual pre decrement ki priorty sabse jyada hai
int x = 3 , y;
y = --x;
printf("%d %d", x , y);
return 0;
}

Output:
The output of above code is 2 2

NOTE : We cannot use constant as an operand of increment or decrement operator.
For example 3++; is invalid.


4.******************************************************sizeof operator********************************************************************

It is also a keyword. sizeof operator takes one operand as it is unary operator and tells its size in bytes.
Operand of sizeof can be a data type, variable or constant.
The below program depicts the behaviour of sizeof operator.
*/
#include <stdio.h>

int main()
{
    int x;
    float k;
    char ch;
    double d;

    printf("%d", sizeof(int));
    printf("\n%d", sizeof(float));
    printf("\n%d", sizeof(char));
    printf("\n%d", sizeof(double));

    printf("\n%d", sizeof(x));
    printf("\n%d", sizeof(k));
    printf("\n%d", sizeof(ch));
    printf("\n%d", sizeof(d));

    printf("\n%d", sizeof(21));
    printf("\n%d", sizeof(3.5));
    printf("\n%d", sizeof('a'));
    printf("\n%d", sizeof(4.5f));

    return 0;
}

/*
NOTE:
1. int variable in 16 bit compilers (turbo) will consume 2 bytes in memory but in 32 bit or 64 bit compilers 
(GCC-Code blocks or DEV CPP) it consumes 4 bytes in memory 

2. char variable take 1 byte in memory but char constant is treated as an integer value (ASCII code), hence 
assumed as an integer value. sizeof consider it an integer and size is shown 4 bytes 

3. 3.5 is double and not float 

4. 4.5f , suffix f tells the compiler that the value is float type 

*/







