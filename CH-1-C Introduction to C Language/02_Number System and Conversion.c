/*
-----------------------------------------------------------Number System-------------------------------------------------------------------------

1. Number system ek mathematical system hai jisme numbers ko represent kiya jata hai. 
Ye system computer science aur programming ke liye kaafi important hai, kyunki computers different number systems ka use karte hain, 
jaise binary, decimal, octal, aur hexadecimal. 

2. Number System Kya Hota Hai?
Number system ek tarika hai jisme hum numbers ko digits aur base (radix) ki help se likhte hain.
Base: Ye batata hai ki ek number me kitne unique digits ho sakte hain
Example:
Decimal ka base 10 hota hai (digits: 0-9).
Binary ka base 2 hota hai (digits: 0 aur 1).


--------------------------------------------------------Common Number Systems------------------------------------------------------------------

1. Decimal Number System (Base 10): 
Ye hum humans ka default system hai.
Iska base 10 hota hai (digits: 0-9).

Example: 
1234
1 × 10³ + 2 × 10² + 3 × 10¹ + 4 × 10⁰
= 1000 + 200 + 30 + 4 
= 1234

2. Binary Number System (Base 2):
Computers ka default system hai.
Iska base 2 hota hai (digits: 0 aur 1).

Example: 
1011 (binary)
1 × 2³ + 0 × 2² + 1 × 2¹ + 1 × 2⁰
= 8 + 0 + 2 + 1 
= 11 (decimal)

3. Octal Number System (Base 8):
Iska base 8 hota hai (digits: 0-7).

Example: 
157 (octal)
1 × 8² + 5 × 8¹ + 7 × 8⁰
= 64 + 40 + 7 
= 111 (decimal)

4. Hexadecimal Number System (Base 16):
Iska base 16 hota hai (digits: 0-9 aur A-F, jaha A = 10, B = 11, ..., F = 15).

Example: 
1A3 (hexadecimal)
1 × 16² + 10 × 16¹ + 3 × 16⁰
= 256 + 160 + 3 
= 419 (decimal)


---------------------------------------------------Conversion Between Number Systems---------------------------------------------------------

*******************************************************1. Decimal to Binary Conversion:***************************************************

1. Number ko repeatedly 2 se divide karein.
2. Remainders ko reverse order me likhein.

Example: Convert 13 to binary

13 ÷ 2 = 6            remainder 1
6 ÷ 2 = 3             remainder 0
3 ÷ 2 = 1             remainder 1
1 ÷ 2 = 0             remainder 1
Binary: 1101

**********************************************************2. Binary to Decimal Conversion:***************************************************

Binary ke digits ko multiply karein 2 ke powers se aur unka sum nikal lein.

Example: Convert 1011 to decimal

(1 × 2³) + (0 × 2²) + (1 × 2¹) + (1 × 2⁰)
= 8 + 0 + 2 + 1 
= 11

*****************************************************3. Decimal to Hexadecimal Conversion:*************************************************** 

Number ko repeatedly 16 se divide karein.
Remainders ko reverse order me likhein.

Example: Convert 419 to hexadecimal

419 ÷ 16 = 26 remainder 3
26 ÷ 16 = 1 remainder 10 (A)
1 ÷ 16 = 0 remainder 1
Hexadecimal: 1A3

******************************************************4. Hexadecimal to Decimal Conversion****************************************************

Multiply karein hexadecimal ke har digit ko 16 ke powers se aur unka sum nikal lein.

Example: Convert 1A3 to decimal

(1 × 16²) + (10 × 16¹) + (3 × 16⁰)
= 256 + 160 + 3 
= 419


--------------------------------------------------Real-Life Use of Number Systems------------------------------------------------------------

1. Binary: Computers data ko process aur store karte hain.

2. Decimal: Humans ke daily calculations ke liye.

3. Octal: Embedded systems aur permissions ke liye (e.g., Linux file permissions).

4. Hexadecimal: Color codes (HTML/CSS), memory addresses, aur debugging ke liye.



*/