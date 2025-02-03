/*
-----------------------------------------------------------while loop------------------------------------------------------------------------

C mein while loop ek aisa loop hai jo tab tak chalta hai jab tak condition true hoti hai. Jab condition false ho jaye, loop ruk jata hai.

Following is the syntax of while loop: 
...
while(some condition)
{

       statement1;
       statement2;
       ...
}
...

1. while is a keyword. 
while ek keyword hai - Iska matlab hai ki ye C programming ka ek reserved word hai, jo loop create karne ke liye use hota hai.

2. It looks like if statement but different on one thing, control comes back to while after reaching end of while block. 
while aur if dono similar lagte hain, lekin ek farak hai ki if condition ek baar check karke aaghe badhta hai.
while condition check karta hai, aur agar true hai toh wapas wahi se start hota hai (repeat hota hai).

3. while block is set of statements bounded by pair of curly braces and present immediately after the while(some condition).
while loop ke andar {} curly braces hoti hain, jinme code likha jata hai jo baar-baar chalega.

4. Parenthesis followed by while keyword can never be empty.
Condition (while(condition)) hamesha likhni padti hai - Agar parentheses () khali chhodenge, toh error aayega!

5. There is no semicolon after while (condition), because while statement is not terminating there.
while (condition) ke baad semicolon (;) nahi lagate - Kyunki ye ek control statement hai, jo terminate nahi hota turant. 

6. Whatever we have written in parenthesis is evaluated as true or false.
Parentheses () ke andar likha hua expression true ya false hota hai:
Agar true hai → while block chalega.

7. If the condition in the parenthesis is false, control simply skipped while block.
Agar false hai → while block skip ho jayega aur control next statement par chala jayega.

8. If the condition in the parenthesis is true, control enters in while block and execute statements present in the while block. 
When control reaches at the end of while block it again goes back to while keyword and recheck the condition written in the parenthesis.
Loop baar-baar chalega jab tak condition true hai – Jab loop ka last statement execute ho jaye, toh control wapas while par aayega aur 
dobara condition check karega.

9. If the condition in the parenthesis is again true, control again enters in while block. This keeps on going until condition becomes false. 
Condition True Hone Par Loop Continue Rahega Jab condition phir se true hoti hai, toh loop wapas chalu ho jata hai.
Jab tak condition false nahi hoti, tab tak loop chalta rahega.

10. We can say while loop as entry control loop, because control can enter in the while block only after checking the condition.
While Loop = Entry Control Loop 
"Entry control loop" ka matlab – Jab tak condition check nahi hoti, tab tak loop start nahi hoga.
Agar pehli baar hi condition false ho gayi, toh loop ek baar bhi execute nahi hoga.

11. We want to control the iteration, for which we have to make condition in such a way that it changes on iterations.
Condition Har Baar Change Honi Chahiye Agar condition same rahi, toh loop infinite ho sakta hai!
Har iteration me kuch aisa change hona chahiye jo condition ko false ki taraf le jaye.

Important Points:
✅ Loop tab tak chalega jab tak condition true hai.
✅ Agar condition kabhi false hui toh loop ruk jayega.
✅ Loop ke andar increment ya decrement likhna zaroori hai, warna infinite loop ban sakta hai.

*/