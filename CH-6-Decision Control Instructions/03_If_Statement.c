/*
-----------------------------------------------------------if statement------------------------------------------------------------------------

Ye ek simple conditional statement hai jo condition true hone par block ko execute karta hai.

include <stdio.h>
int main()
{
    ------------------------
    ------------------------
    if(some condition)
    {
        statemtnt1;
        statement2;
        ----------
    }
return 0;
}

1. if is a keyword which let compiler know the decision control statement begins.
if ek keyword hai jo compiler ko batata hai ki ab ek decision-making statement shuru ho raha hai.

2. Immediately after if keyword some condition is there in the parenthesis. 
if ke baad parentheses (()) ke andar ek condition hoti hai.

3. Condition can be any valid expression in C language.  
Condition koi bhi valid C expression ho sakti hai, jaise a > 5, x == 10, ya y != 0.

4. Condition is always evaluated as true or false.  
Condition hamesha true ya false (non-zero ya zero) mein evaluate hoti hai.

5. If the result of expression is non-zero it is considered as TRUE otherwise FALSE.
Agar condition ka result non-zero hai toh condition TRUE maani jati hai. Aur agar result 0 hai, toh condition FALSE maani jati hai. 

6. Immediately after this condition there is a block of code. This block is known as if block.
if ke baad jo curly braces { } ke andar code likha hota hai, use if block kehte hain.

7. Whatever we write in if block will be execute only when condition is TRUE.
Agar condition TRUE hai, toh if block ka code execute hoga. 

8. When condition is false control skip if block and execute statements written after if block.
Agar condition FALSE hai, toh if block skip ho jata hai aur if block ke baad ka code execute hota hai.

9. Syntax:
if(condition)
{
    statement1;
    statement2;
    -----------
}


*/