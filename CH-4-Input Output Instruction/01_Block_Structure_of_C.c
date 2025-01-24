/*
-----------------------------------------------------------Block Sructure------------------------------------------------------------------

1. C is a Block Structured Programming Language. 
Kyunki c language mein jo program bnaya jata hai vo block bnakar code kiya jaata hai.

2. A C Program can have any Number of Blocks. 

3. What is Block?
Ans. Curly brackets ke ek pair ko block bolte hain.
{
   ----------------       ye jo lines hum likhte hain inhe ko hum statementes,Instructions aur commands bolte hain
   ----------------       This is called Block.
}

4. Usually Outermost Blocks are functions.

**NOTE = Block ke andar bhi block bnaaye ja sakte hain saare blocks ko function nhi bolte.

Example:
 add()
{
  --------------
  --------------                This is a Function
} 
 is_prime
{
    -------------
    -------------              This is a Another Function
    {
       --------------
       --------------
    }
}

5. What is a function?
Ans. Function is a Block of code.
OR
Function is a block of Statements,which has some name for Identification.   

6. Function has some name for Identification.
***NOTE = functions ke naam rakhne ke vhi niyam hain jo variables ke naam rakhne ke niyam the albhabets,digit,underscore ke alava koi 
symbol nhi aayega space bhi nhi aayega dot bhi nhi aayega aur phla letter kabhi digit nhi hoga.

7. The Smallest C program has one function.

8. Function names must be Unique.
***NOTE = Agar program ke andar bhut saare function ban rhe hain to ye dhyan rakhna ki har function ka naam alg alg hona chaiye.

9. If there is only one function its name must be main().
Agar hum program mein ek hi function bna rhe hain hai to obvious si baat hai ki uska naam hum main()rakhenge.
Ab kyu Main()? Kyunki ye hmare program ka entry point hota hai program ka execution yhi se start hota hai

10. If There are more than one Function in the Program then also one function name must be main().
Ek C program ke andar hum kitne bhi function bna le lekin compulsory hai ki ek function humko aisa bnana pdega jiska naam hoga main().

11. We can write decleartion statement inside a block(function) or outside all functions. 
Hum apne program ke andar declaration statement function ki body ke andar bhi likh sakte hain aur bahar bhi likh sakte hain.
Matlab jaise declaration statement hai int a,b hai toh hum ise funtion ki body ke andar bhi likh sakte hain aur bahar bhi.

Example 1:                         
main()
{
   int a,b;        This is called Local variables (Jab hum andar kisi variable ko function ki body ke andar declare krte hain to vo hota hai Local variables)
}

Example 2:
 int a,b;
main()
{
  ----------       This is called Global variables (Jab hum bahar kisi variable ko function ki body ke bahar declare krte hain to vo hota hai Global Variables)
}

11. Global Variable ka matkab hota hai jo pure program ke andar kisi bhi function se access ho paayega.
Lekin jo local variables hote hain vo jis function ki body mein bne hote hain usi ke andar se hum use use kar sakte hain.
Global means pure program mein aur local means jis function ki body mein bna hai bs usi ke andar access ho paayega.

12. Action statement can reside only inside the block(function). 

13. C is a case sensitive Language.  


*/