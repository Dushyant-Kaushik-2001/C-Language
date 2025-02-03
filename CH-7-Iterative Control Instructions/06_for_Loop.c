/*
-------------------------------------------------------------for loop-----------------------------------------------------------------------

For loop C mein ek repetition control structure hai jo kisi bhi task ko multiple times execute karne ke liye use hota hai. 
Ye tab tak chalta hai jab tak condition true hoti hai.

Following is the syntax of for loop:
...
for(initialization; condition; flow)
{

       statement1;
       statement2;
       ...
}
...


1. for is a keyword.
for ek keyword hai → Ye ek reserved word hai jo C language ke rules follow karta hai.

2. The most appealing feature of for loop is its format which is capable to provide place three basic logical constructs to control 
looping, initialization, condition and flow at one place. 
Sab kuch ek jagah likhne ki facility → for loop ka sabse bada advantage ye hai ki initialization, condition, aur update ek hi line me 
likh sakte hain.

3. In the for’s parenthesis, exactly two semicolons are mandatory. 
Do semicolons (;) mandatory hote hain → for loop ke parenthesis (()) ke andar do semicolons hona zaroori hai.

4. Whatever written before the first semicolon is executed first, then control moves to condition part, which is written between the semicolons. 
Condition is evaluated as true or false. If it is false, control simply skipped for’s block. If the condition is true control 
enters into the for’s block. After executing statements residing in the for’s block, control jumps up to the flow section, which is 
written after the second semicolon in the parenthesis. Control again moves to the condition part and process repeats.
Execution flow:
Initialization: Sabse pehle execute hota hai. (e.g., int i = 0;)
Condition Check: Agar condition true hai, toh loop chalega, nahi toh loop end ho jayega.
Block Execution: Agar condition true hai, toh loop body ka code execute hoga.
Update: Last me update hoga (e.g., i++), phir condition dobara check hogi.

5. The for loop is also an entry control loop.
Entry Control Loop → Iska matlab ye hai ki for loop tabhi chalega jab condition true ho, agar pehli baar hi condition false ho gayi toh 
loop ka code ek baar bhi execute nahi hoga.


*/