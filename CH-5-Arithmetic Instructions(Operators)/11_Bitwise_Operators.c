/*
------------------------------------------Bitwise Operators (&, |, ^, ~, >>, <<)--------------------------------------------------------------

Operators that perform on bits (0 or 1) are known as bitwise operators.  
Binary digits is called a Bit. 0 & 1 are bits. 

There are six bitwise operators.
1. Bitwise AND (&)
2 .Bitwise OR  (|)
3. Bitwise XOR (^)
4. Bitwise NOT (~)
5. Right Shift >>
6. Left Shift  <<
 
1.Bitwise AND (&)                    // Dono mein se ek bhi 0 hai toh result 0 ayega
0 & 0 = 0  
0 & 1 = 0 
1 & 0 = 0 
1 & 1 = 1 

2.Bitwise OR ( | )                  // Dono mein se ek bhi 1 hai toh result 1 aayega
0 | 0 = 0 
0 | 1 = 1 
1 | 0 = 1 
1 | 1 = 1 

3.Bitwise XOR (^)                  // Dono same hain agr toh result 0 aayega
0 ^ 0 = 0 
0 ^ 1 = 1
1 ^ 0 = 1 
1 ^ 1 = 0 

4.Bitwise NOT (~)                 // 0 ko 1 kr dena 1 ko 0 kr dena
~0 = 1 
~1 = 0


****To solve bitwise operators &, | and ^, we need to convert both the operands into their binary equivalent. 
Represent in 32 bits representation. (integer takes 4 bytes in memory) 
Perform operation between every pair of corresponding bits according to the behaviour described above. 


*/