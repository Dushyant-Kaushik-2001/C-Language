#include <stdio.h>
int main()
{
    int x, y = 5;
    x = y > 10 || y < 7;
    printf("%d", x);
    return 0;
}

/*

Output:
1
In the expression x = y>10 || y<7, y>10 is false, so we check expression 2 and y<7 is true, 
therefore operands of logical OR operator are false and true. The result is then evaluated as true, this result is assigned to variable x. 
Since true is represented as 1 (one) therefore x is assigned 1.
 
Example 2:

#include<stdio.h>
int main()
{
   int y , x = 5;
   y = x < 4 || x < 10;
   printf("%d", y);
   return 0;
}

Output:
1
 

*/