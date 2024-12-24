/*

------------------------------------------------------Convert Decimal to Binary------------------------------------------------------------

Steps:

1. Divide the decimal number by 2.
2. Record the remainder (0 or 1).
3. Repeat step 1 with the quotient until the quotient becomes 0.
4. The binary number is the sequence of remainders read in reverse order.

Example:
Convert decimal 13 to binary:

13 ÷ 2 = 6 remainder 1
6 ÷ 2 = 3 remainder 0
3 ÷ 2 = 1 remainder 1
1 ÷ 2 = 0 remainder 1

Binary result: Read remainders from bottom to top → 1101.


------------------------------------------------------Convert Binary to Decimal-----------------------------------------------------------

Steps:

1. Write down the binary number.
2. Starting from the rightmost digit, multiply each digit by 2𝑛 , where 𝑛 is the position index starting from 0.
3. Sum up all the results.

Example:
Convert binary 1101 to decimal:

1×2 ki power 3 = 8
1×2 ki power 2 = 4
0×2 ki power 1 = 4
1×2 ki power 0 = 1

Decimal result: 8+4+0+1=13

*/