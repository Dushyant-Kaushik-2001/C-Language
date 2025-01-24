/*
--------------------------------------------------------Input Instruction------------------------------------------------------------------

Most of the time we want to process data which is provided by user through keyboard. 
We expect from user to provide needful data through keyboard,which we can take in program’s variables,and then use them in processing task. 
To achieve this goal we need to write some instruction, better known as input instruction.


---------------------------------------------------------scanf() function----------------------------------------------------------------- 

1. Just like printf, scanf is also a predefined function.

2. The job of scanf() to input data from keyboard. 
(Actually, data which comes from keyboard, settled in a standard input buffer, from where scanf() pulls data and convert it to the 
specified format, which we have mentioned during call of scanf).

3. Syntax of scanf():

scanf(“format specifier”, address of variable);

4. For example, if there is a variable x of type int, Now we want to allow user to input an integer value through keyboard and 
then our program can store it to variable x. 
The job can be done as: 

scanf(“%d”,&x); 

In the above statement, ‘&’ is a Referencing operator which we will see later in pointers chapter. It should be read as ‘address of’.

5. Scanf() can take data which requires multiple key strokes.
Scanf mein hum aisa data enter kr sakte hain vo aisa data bhi ho sakta hai jismein multiple key strokes requierd ho matlab multiple times 
key press krna required ho.

6. Scanf() can take data as a sequence of characters and uses space,tab and new line character as a data seperator. 
Scanf ki madad se hum multiple data bhi input kra sakte hain.

7. For example: Hum user se khna chahte hain ki do numbers enter kro toh user ne number enter kiya 25 and 36. 
Ab user jab keyboard se number enter krra hai toh ye do number hain ye kese pta chalega?  
user to lgataar key press kar rha hai keyboard se kha par pta chalega ki phla number khatam ho gya? , Doosra number khatam ho gya? 
Ans.
Toh Dono numbers ke beech mein hum jo cheez seperation ke liye istmal krenge vo hogi ya to space bar, ya tab key,ya phir enter space 
(new line character).
Matlab user jb bhi keyboard se data enter krega (ek se jyada data) agr user se enter krvana hai toh data ke beech mein seperation karne ke 
liye hmare paas teen tarike hain.
Space , Tabspace ya fir new line character jo ki enter key dabaane se bnega.


*****NOTE POINT***** 
-Agar user data enter kar rha hai toh user key press kar rha hai one by one,toh har ek key se jo symbol andar jaata hai vo as a character 
hi jaata hai.
For Example: 
User ne enter kiya 25 36 toh actual mein phle '2' as a character gya andar , phir '5' as a charcater gya andar , phir space '' as a 
character gya andar , phir 3 , phir 6 , phir '/n' new line character as a character gya andar.
This is called Sequence of characters.
Ye jo sequence of characters user ne enter kiye ye characters hain char type ke ye number hain hi nhi ye characters hain.
Toh it can convert data into desired type.

8. Scanf() can convert Data into desired Type.
Matlab Hum chahte hain ki jo Data(Sequence of characters)user ne enter kiya hai unhe ek number maana jaaye toh sabse phle '2' aur '5' 
user ne enter kiya hai isko 25 maana jaaye do alg alg character na maana jaaye do alg alg data maana jaaye abhi filhaal ye 2 ek caharcter
hai aur 5 ek character hai dono ko milakar 25 banna chaiye toh ye kese hoga?
Ans. 
Ye kaam scanf kar sakta hai par kese? 
iske liye hume use krna pdega Format Specifiers.
Hume scanf() mein format specifier likh kar ye btana pdega ki data jo aaya hai usko kis type mein convert krna hai.

9. Scanf() can store data in a specified Variable.
Matlab Hum jis variable mein chahenge data us variable ke andar ho jaayega store yaani humko variable ka naam btana pdega.


----------------------------------------------Answer the following questions------------------------------------------------------------------- 

Ques.1 Why we are using printf just above scanf? 
Ans. Program lines executes line by line. If we write scanf without prior printf, we would see a blank output screen. 
No message (no direction) for the user. So it is a nice idea to guide user what he should do. 
Printing a message like “Enter a number” makes our program more users friendly.

Ques.2 Can’t we write statement s=x*x; just after declaration statement? 
Ans. Statement s=x*x; should processed only when you received value in variable x. 
So writing statement s=x*x just after declaration and before scanf is a big mistake, as in that case it would be processed before getting 
value in variable x.

Ques.3 Can we make the same program without using variable s? 
Ans. Yes we can make the same program without using variable s.  


*/