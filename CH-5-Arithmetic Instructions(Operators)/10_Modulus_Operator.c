/*
--------------------------------------------------------Modulus Operator------------------------------------------------------------------

1. Modulus operator is used to find remainder value and can be worked only on integer operands.

2. Modulus operator ka kaam hai do numbers ka remainder (bacha hua hissa) nikalna, jab ek number ko doosre number se divide karte hain. 

3. Modulus Operator can not be applied on Real constants.

*****************************************Observe the result of following operations********************************************************

1. 35 % 6  = 5
Dividing 35 by 6, We will get 5 as a remainder


2. 5 % 2  = 1 
Dividing 5 by 2, we will get 1 as a remainder


3. 3 % 4 = 3 
When dividend is smaller than the divisor, the remainder is always the smaller one.
NOTE = Jab bhi chota number left mein hoga vhi Ans aayega.


4. 2 % 5  = 2 
2 is smaller than 5, thus the result is 2


5. 15 % 5 = 0 
Perfect division always gives 0 as a remainder. This can be used to test divisibility.


**NOTE = Remainder 0 bachna matlab 15 5 se divisible hai. Aur Kabhi bhi hume Divisibility check krni ho toh x/y mat kriye ye galat hai 
x % y kriye aur agar result 0 aa jaaye toh YES ye Divisible hai.


6. 91 % 10 = 1 
Dividing any number by 10 always give last digit as a remainder
(We need not to be a genius to understand this concept)

NOTE = Divide se quotient milta hai aur Modulus se Operator.


7.    5 % 2         1
     -5 % 2        -1
     5 % -2        1
     -5 % -2       -1

**NOTE = jab bhi (-)sign lga ho to sabse phle use ignore karke solve kro ans aaya 1.
        Ab agar numerator mein (-)sign hai to ans Negative hoga - sign lga do.
        Denominator mein sign kuch bhi ho koi farak nhi padta keval Numerator ka sign dekhna hai.


8. 3.5 % 2 = Error 
C Language ke andar hum real constant ke upar % apply nhi kar sakte 3.5 is real constant Kyunki dono operands Integer hone chaiye.


Ques.1. a/10 what is the Ans? 
Ans. a without last digit.
Example: 
215/10 = 21
525/10 = 52
42/10 = 4
10245/10 = 1024
5/10 = 0

Ques.2. a % 10 What is the Ans?
Ans. Last digit of a.
Example: 
216 % 10 = 6
40253 % 10 = 3
25 % 10 = 5
2 % 10 = 2





*/