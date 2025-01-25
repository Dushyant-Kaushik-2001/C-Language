 /*
----------------------------------------------Unary Operators (+,-,++,--,sizeof)------------------------------------------------------------

Unary operators require only one operand to perform their operation.


1.*********************************************Unary + and unary -************************************************************************

These are not addition or subtraction operators, but they are unary plus and unary minus, used to indicate sign of a number.
For example: -3, +5


2.***********************************************Increment Operator ++*********************************************************************

(a). Increment operator increases the value of the operand by 1.

For Example:

#include <stdio.h>
int main()
{
    int x = 3;
    x++;                                           // x++ is post increment(priority sabse kam) , x = x+1
    printf("%d", x);
    return 0;
}

Output:
In the above program x is a variable containing 3 initially. 
In the next step increment operator is used to increase its value by one. 
The updated value of x is now 4, so the output of the program is 4.


(b). We can also use operator before operand.

For Example:

#include <stdio.h>
int main()
{
    int x = 3;
    ++x;                                            // ++x is pre increment(priority sabse jyada) , x = x+1
    printf("%d", x);
    return 0;
}

Output:
The output of the above program is also 4.
Both the styles of using increment operator (x++ is post increment and ++x is pre increment) have the same function 
but with different priorities.

(c). Pre increment has high priority among all the operators but post increment has the least priority among all the operators, 
even less than the assignment operators.


3.***********************************************Decrement operator --***********************************************************************

(a) The job of decrement operator is to decrease value of the operand by one. 
Just like increment operator,decrement operator can be used either before operand or after operand.

(b) x--; post decrement 
    --x; pre decrement.

(c) Priority of pre decrement is high among all the operators and priority of post decrement operator is least among all the operators.


NOTE : We cannot use constant as an operand of increment or decrement operator.
For example 3++; is invalid.

*/