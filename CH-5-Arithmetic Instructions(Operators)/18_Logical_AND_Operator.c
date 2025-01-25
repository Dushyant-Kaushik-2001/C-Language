#include <stdio.h>
int main()
{
    int x;
    x = 5 > 3 && 4 < 0;
    printf("%d", x);
}


/*
Output:
0

Here, two conditions 5 > 3 and 4 < 0 are combined to form a single condition using && operator as 5>3&&4<0. 
Condition one is evaluated as TRUE as 5 is greater than 3. Since condition one is TRUE 
condition two is tested and evaluated as FALSE as 4 is not less than 0. 
According to the above chart, T&&F is treated as FALSE thus 0 is stored in x.

Example 2:

#include<stdio.h>
int main()
{
    int y , x = 5;
    y = x > 4 && x < 10;
    printf("x = %d", y);
    return 0;
}

Output:
1

*/