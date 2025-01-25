/*
-----------------------------------------------------Logical Operators (!, &&, ||)--------------------------------------------------------

1.Logical NOT (!)              // Ye unary operator bhi hai toh iski priority sabse jyada hai arithmetic,bitwise se bhi jyada 
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

(e) Every non zero value is considered as TRUE. 

(f) Zero is considered as FALSE. 

Example: 
x = !5;
i.e,
x = !True that is False toh ans 0.

Example: 
x = !5 > -2;         // phle solve krenge not operator Relational mat solve kr dena kyunki not operator unary operator hai iski priority jyada hai     
i.e, 
0 > -2  which means 1 Ans.


2.***************************************************Logical AND operator (&&)*************************************************************

(a) Logical AND operator is used to combine two expression, thus it is a binary operator. 

(b) The format of expression using && operator is : Expression1 && Expression2. 

(c) The behaviour of logical AND is describes as:

Expression 1  Expression2  Result
T           &&     T    =   T                             // NOTE = Agar ek bhi false hai toh result will be false
T           &&     F    =   F
F           &&     T    =   F
F           &&     F    =   F 
 

3.***************************************************Logical OR (||)************************************************************************

(a). Logical OR operator is also used to combine two expressions. This is a binary operator.

(b). The format of expression using || operator is : Expression1 || Expression2

(c). The behaviour of logical OR operator is as follows: 

Expression 1   Expression2  Result
TRUE        ||    TRUE     =  TRUE                            // NOTE = Agar ek bhi true hai to result bhi true 
TRUE        ||    FALSE    =  TRUE
FALSE       ||    TRUE     =  TRUE
FALSE       ||    FALSE    =  FALSE
 

*/