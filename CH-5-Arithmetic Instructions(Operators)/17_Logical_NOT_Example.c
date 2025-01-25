#include <stdio.h>
int main()
{
    int x;
    x = !(5 > 4);
    printf("x = %d", x);
    return 0;
}


/*

Output:
The output of the program is  x = 0 
In the expression x = !(5 > 4), bracket operates first, so the result of 5 > 4 is 1 (true). 
This result becomes the operand of logical NOT operator, which makes it 0 (false). 
Thus the value stored in x is 0.

Example 2:

#include<stdio.h>
int main()
{
    int x;
    x = !4;
    printf("x = %d", x);
    return 0;
}

Output:
The output of above program is  x = 0 
In the expression x = !4, 4 is the operand of logical NOT operator. 4 is treated as true. 
Remember every non-zero value is true and zero is false. 4 is a non-zero value, so it is treated as true. 
Now logical NOT operator inverts the truth value from true to false and therefore 0 is stored in x. 


Example 3:

#include<stdio.h>
int main()
{
    int y,x = 5;
    y = !x > 4;
    printf("x  = %d", y);
    return 0;
}
Output:
0

*/