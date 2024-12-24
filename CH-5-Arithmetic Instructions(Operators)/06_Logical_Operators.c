/*
-----------------------------------------------------Logical Operators (!, &&, ||)--------------------------------------------------------

1.Logical NOT (!)              // ye unary operator bhi hai toh iski priority sabse jyada hai arithmetic,bitwise se bhi jyada 
2.Logical AND (&&) 
3.Logical OR (||)

1.*******************************************************Logical NOT (!)*****************************************************************

(a) It is also a unary operator.

(b) Priority of Logical NOT (!) operator is not only just higher than the remaining two logical operator but higher than all other 
operators too, as it is also a unary operator. 

(c) It inverts the truth value of statement.

(d) The behaviour of Logical NOT operator is to alter the truth value of the statement.
       ! TRUE = FALSE 
       ! FALSE = TRUE 

Example 1:
#include<stdio.h>
int main()
{
int x;
x = !(5 > 4);
printf("x = %d", x);
return 0;
}
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


2.***************************************************Logical AND operator (&&)*************************************************************

(a) Logical AND operator is used to combine two expression, thus it is a binary operator. 
(b) The format of expression using && operator is : Expression1 && Expression2. 
(c) The behaviour of logical AND is describes as:
Expression 1  Expression2  Result
T           &&     T    =   T                      // NOTE = Agar ek bhi false hai toh result will be false
T           &&     F    =   F
F           &&     T    =   F
F           &&     F    =   F 
 
Example 1:
#include<stdio.h>
int main()
{
int x;
x = 5 > 3 && 4 < 0;
printf("%d", x);
}

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


3.***************************************************Logical OR (||)************************************************************************

(a). Logical OR operator is also used to combine two expressions. This is a binary operator.
(b). The format of expression using || operator is : Expression1 || Expression2 
(c). The behaviour of logical OR operator is as follows: 
Expression 1   Expression2  Result
TRUE        ||    TRUE     =  TRUE                  // NOTE = Agar ek bhi true hai to result bhi true 
TRUE        ||    FALSE    =  TRUE
FALSE       ||    TRUE     =  TRUE
FALSE       ||    FALSE    =  FALSE
 
Example 1:
#include<stdio.h>
int main()
{
int x  , y = 5;
x = y > 10 || y < 7;
printf("%d", x);
return 0;
}

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