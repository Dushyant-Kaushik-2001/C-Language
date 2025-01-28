/*
-------------------------------------------------------------If else--------------------------------------------------------------------------

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
    else                                                                            // else ke baad (----) mein koi condition nhi hoti
    {
       statemtnt1;
       statement2;
       -----------
    }
return 0;
} 

1. This is similar to if but the else block is new add on. Agar condition false ho, to else block execute hota hai.

2. If the condition of if is TRUE if block is executed and if the condition of if is FALSE else block is executed.  

3. We can use if statement without else block but else must be in conjunction with if block.  

4. else block should appear immediately after if block otherwise an error occurred during compilation.


*********************************************************Rules of If else:***********************************************************************

1. We can write any number of statements in if or else block.
Hmesha dhyaan rakhna else ke baad koi condition nhi hoti, Condition hmesha if ke baad hoti hai.
If else mein se exactly ek hi block chalega dono block kabhi nhi chalenge.

2. When if or else block contains single statement, we can drop the curly braces (used to mention block).
Agar if ka block mein ek hi single statement hai toh if ka block curly braces se bnane ki jarurat nhi hai. 
Bnayenge to bhi sahi hai aur na bhi bnaaye to bhi chalega ye understood rhega ki ye phla statement jo if ke baad likha hai ye hi if block ka hissa hai.
Similarly, Ye Rule else par bhi laagu hota hai ydi else mein bhi ek hi statement hai to curly braces lgana jaruri nhi hai.

3. There is no separate condition for else block, rather it is executed when if’s condition is evaluated false.

4. We can use if without else but cannot use else without if.
If akela aa sakta hai if else bhi lga sakte hain par, akela else nhi aa sakta bina if ke else ho hi nhi sakta.

5. else block must be used just after the end of if block.
Agar hum else likh rhe hain to if to hoga hi, lekin vo else if  block ke turant baad hona chaiye.

6. Whenever there are more than one statement in if or else block, mentioning body using curly braces is mandatory.

7. Do not put a semicolon at the end of if() or else, however this is not an error, but it is interpreted as if there is no statement in
the block, also known as null statement.

8. Do not write multiple conditions separated by comma.
For example:
if(x > 10, x < 50)  
is not a valid way to write multiple conditions, rather we should use logical operators like 
if(x > 10 && x < 50)

10. We can write another if or if else statement inside if or else block. This is called nesting.

*/