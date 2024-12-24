/*

Ques.8. How to convert a number from a decimal number system to a binary number system?

Ans. To convert a number from the decimal number system (base 10) to the binary number system (base 2),we can use the division-by-2 method. 
This method repeatedly divides the decimal number by 2, recording the remainders at each step. 
The binary representation is obtained by reading the remainders in reverse order.

* Summary of the Steps:

1. Divide the decimal number by 2.
2. Record the remainder.
3. Repeat the division process with the quotient.
4. Continue until the quotient is 0.
5. The binary number is the remainders written in reverse order.


* Steps to Convert a Decimal Number to Binary:

1. Divide the Decimal Number by 2.
Divide the decimal number by 2 and record the quotient and the remainder.
The remainder will always be either 0 or 1 (this is the binary digit).

2. Continue Dividing the Quotient by 2.
Use the quotient from the previous division as the new number to divide by 2.
Record the remainder.

3. Repeat the Division.
Continue dividing by 2 until the quotient becomes 0.

4. Write the Remainders in Reverse Order.
The binary number is the string of remainders read from bottom to top (last remainder first).

Example: Converting the Decimal Number 13 to Binary

1.Divide 13 by 2:
Quotient = 6, Remainder = 1
Write down the remainder: 1.

2.Divide 6 by 2:
Quotient = 3, Remainder = 0
Write down the remainder: 0.

3.Divide 3 by 2:
Quotient = 1, Remainder = 1
Write down the remainder: 1.

4Divide 1 by 2:
Quotient = 0, Remainder = 1
Write down the remainder: 1.

Now that the quotient is 0, stop. The binary number is obtained by reading the remainders in reverse order: 
1101.

Final Answer:
The decimal number 13 is equivalent to the binary number 1101.

*/