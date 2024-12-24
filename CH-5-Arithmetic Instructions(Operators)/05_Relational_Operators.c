/*
----------------------------------------------Relational operators ( <, >, <=, >=, ==, !=)---------------------------------------------------

< > <= >=
== !=
Iska answer hmesha true false yaani 1,0 mein aata hai.
True = 1
False = 0

1. Relational operators are useful in comparison of two values. 

2. Operators <(less than), >(greater than), <= (less than or equal to) and >=(greater than or equal to) have higher precedence than the 
operators ==(equal to) and != (not equal to). 

3. Relational Operators are used to states the truth value of the expression. 
Result of these operators are either 1 (for true) or 0 (for false).

Examples:
 
3 < 4             Ans. 1
5 >= 5            Ans. 1
2 == 3            Ans. 0
5 > 4 > 3         Ans. 0       phle 5 > 4 ko solve krenge ismein left to right chalta hai agr dono operator ki priority same hai 5 > 4 chalega to iska result aayega 1 ab 1 > 3 bacha to iska resuly aayega 0

1. 5 > 4 is evaluated as 1 
Read the expression, five is greater than four. 
Truth value of the statement is true, so the result is 1

2. 4 < 4 is evaluated as 0 
Four less than four, truth value is false.

3. 3!=4 is evaluated as 1 
Three is not equal to 4, the truth value of statement is true.

4. 5>4>3 is evaluated as 0 
When there are more than one relational operator of same rank, evaluate the operator which comes first from the left in the expression. 
It is because the associativity rule for relational operators is from left to right. 
5 > 4 > 3         (solve 5>4 first) 
1 > 3             (result of 5>4 is 1) 
0                 (result of 1>3) 





*/