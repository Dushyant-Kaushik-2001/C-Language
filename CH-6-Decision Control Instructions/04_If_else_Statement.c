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


Rule of If else:
1. We can write any number of statements in if or else block.
Hmesha dhyaan rakhna else ke baad koi condition nhi hoti, Condition hmesha if ke baad hoti hai.
If else mein se exactly ek hi block chalega dono block kabhi nhi chalenge.

2. When if or else block contains single statement, we can drop the curly braces (used to mention block).
Agar if ka block mein ek hi single statement hai jaise ki example 1 mein hai if ke block ke andar humne ek hi line likhi hai,
ek se jyada bhi likh sakte the lekin agar ek hi line likhi hai toh if ka block curly braces se bnane ki jarurat nhi hai bnayenge to bhi 
sahi hai aur na bhi bnaaye to bhi chalega ye understood rhega ki ye phla statement jo if ke baad likha hai yhi if block ka hissa hai.
Similarly, Ye Rule else par bhi laagu hota hai ydi else mein bhi ek hi statement hai to curly braces lgana jaruri nhi hai.

3. There is no separate condition for else block, rather it is executed when if’s condition is evaluated false.

4. We can use if without else but cannot use else without if.
If akela aa sakta hai if else bhi lga sakte hain par, akela else nhi aa sakta bina if ke else ho hi nhi sakta.

5. else block must be used just after the end of if block.
Agar hum else likh rhe hain to if to hoga hi, lekin vo else if  block ke turant baad hona chaiye.


Example 1 : Write a program to check whether a number is positive or not.

include <stdio.h>
int main()
{ 
int x;
    printf("Enter a Number:");
    scanf("%d",&x);
 if(x>0)                                           // if mein hume arithmetic instruction hi likhni hai english nhi kyunki compiler arithmetic instruction samjta hai english nhi
    {
    printf("Positive Number");
    }
 else
    {
    printf("Non Positive Number");
    }
 return 0;
}

Output:
Enter a Number : 34
Positive Number
OR
Enter a Number : -23
Non Positive Number

NOTE = Example 1 mein kitne decleartion statement hai aur kitne action statement?
Declaration Statement = 1
Action Statement = 4      
ismein 8 action statement nhi hai kyunki if statement pura ek hi count hoga.


Example 2 : Write a program to check whether pass or fail on the basis of marks provided by user.

include <stdio.h>
int main()
{ 
int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
 if(marks>=33)                         
    {
    printf("You are PASS");
    }
 else
    {
    printf("You are FAIL");
    }
 return 0;
}

Output:
Enter marks:50
You are PASS

Explaination of Program:
1. In the above program, user entered a number, which we have taken in variable marks. 
2. At line number 6, if’s condition is evaluated either as true or false, depending on the value stored in marks. 
3. If the value of marks is greater than or equal to 33, then the condition is true and “You are PASS” is printed on the screen. 
4. If the value of marks is lesser than 33, the condition becomes false, and control jumps to the else block, 
hence “You are FAIL” gets printed


Example 3 : Following code is rewrite of previous program (not using curly braces for the body of if and else block):

include <stdio.h>
int main()
{ 
int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
 if(marks >= 33)  
    printf("You are PASS");                               
else
    printf("You are FAIL");
    
 return 0;
}

Output:
Enter marks:50
You are PASS

Explaination of Program:

1. Whenever there are more than one statement in if or else block, mentioning body using curly braces is mandatory.

2. Do not put a semicolon at the end of if() or else, however this is not an error, but it is interpreted as if there is no statement in 
the block, also known as null statement. 

3. Do not write multiple conditions separated by comma.

For example: 
if(x > 10, x < 50)  is not a valid way to write multiple conditions, rather we should use logical operators like if(x > 10 && x < 50) 

4. We can write another if or if else statement inside if or else block. This is called nesting.



*/