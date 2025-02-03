/*
--------------------------------------------------------do while loop-------------------------------------------------------------------------

do-while loop in C ek aisa loop hai jo kam se kam ek baar toh chalta hi hai, chahe condition true ho ya false.
👉 Pehle loop execute hota hai, fir condition check hoti hai. Agar condition true hai toh loop dubara chalega, warna ruk jayega.

Following is the syntax of do while loop:
...
do
{

       statement1;
       statement2;
       ...
}while(some condition)
...

1. do and while are keywords.
do aur while keywords hain.

2. do while is exit control loop.
do-while ek exit-controlled loop hai. (Kyunki condition baad me check hoti hai)

3. Since while(condition) is written at the end of the statement, it is followed by a semicolon as a mark of termination of the statement.
while(condition) statement ke end me likha jata hai, is wajah se semicolon (;) lagana zaroori hota hai taaki statement terminate ho.

4. Control when reaches ‘do’ keyword, it simply enters into the do-while block. 
Jab control do keyword par pahunchta hai, toh seedha do-while block ke andar chala jata hai.
Where it executes statements and then reaches to the end of block. Just after the block while(condition) is encountered.
Pehle block ke andar likha code execute hota hai.Phir block ke baad while(condition) aata hai, jisme condition check hoti hai.
Where condition is evaluated either as true or false.
If it is true, control moves back to the keyword ‘do’ and repetition begins.
Agar condition true hoti hai, toh control do keyword par wapas chala jata hai aur repetition shuru hoti hai.
If condition is false, it simply move forward to the next statement of the program.
Agar condition false hoti hai, toh program aaghe ke statements execute karta hai.

5. In do while loop, even if the condition is false for the first time, then also control is able to visit do while block once.
This is why it is called exit control loop.
do-while loop me agar pehli baar hi condition false ho, tab bhi loop ka code ek baar toh chalega hi. 
Isi wajah se ise exit control loop kaha jata hai.

6. Do while loop guarantees running of code at least once.
do-while loop kam se kam ek baar code chalane ki guarantee deta hai.

*/