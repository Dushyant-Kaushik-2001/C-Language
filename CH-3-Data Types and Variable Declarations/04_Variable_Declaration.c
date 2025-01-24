/*
---------------------------------------------------------Variable Declaration--------------------------------------------------------------
-Variable Declare Kaise Karte Hain?

C mein variable banane ke liye humein:
1. Data Type (batata hai kis type ka data store karna hai).
2. Variable Name (box ka naam) chaiye hota hai.

Syntax: data_type variable_name;

Example: Suppose humne ek box banaya jisme likha hai marks, aur andar humne 90 rakha.
Box ka naam hai: marks
Box ke andar ki value hai: 90

#include <stdio.h>

int main() 
{
    int marks;                                              // Variable banaya jisme integer (number) store hoga
    marks = 90;                                            // Variable ko value di (assign ki)

    printf("Marks: %d", marks);                          // Value ko print kiya
    return 0;
}

Output:
Marks: 90

------------------------------------------------Variable Declaration & Initialization------------------------------------------------------------

Declaration: Jab hum variable ko banate hain.
Example: int marks;

Initialization: Jab hum variable ko value assign karte hain.
Example: marks = 90;

Combined Declaration & Initialization:
Example: int marks = 90;


1. Variables are new words in the program and needs to be declared for the compiler.
Variables are memory location where we store our data. 
The kind of data we want to store in the variable should be declared so that compiler fixes the memory requirement. 
We can do this by using data types.


2. Variable Declarations:

(A) int a,b=5; 
(B) float k;
(C) char ch,m;
(D) double d1;

3. Variables a and b are of type int, k is of type float, ch and m are of type char and d1 is of type double.

4. int variable consumes 4 bytes in memory, char variable takes 1 byte, float takes 4 bytes and double takes 8 bytes in memory.

**NOTE = Memory data type ko nhi variable ko milti hai yaani jitne varibale honge utni memory milegi.

5. Variable of type int can store integers, char variable is used to store character constant, float and double variables are used to 
store real constant.

**NOTE = Variable ki value hum kitnii baar bhi change kar sakte hain.
Example:
int a,b=5;
b=6;
b=7;

**NOTE = Ye koi jaruri nhi hota jab hum variable declare kar rhe hain to usi waqt hum value bhi initialize krein. 
Ye declarartion statement compiler ke liye hote hain taaki compiler ko variables ke naam ka pta chal ske aur pure program mein ager 
in naam ko istmaal krenge to compiler ko uska meaning samaj mein aa skega.
 
6. double consumes double the amount of space take by float variable, so double variable can store data with high precision as compare to 
float variable. 

7. We can initialize variables during declaration, otherwise they contain garbage value. 

8. void is a data type but we cannot use it to make variables (Later we will learn that it is possible to make pointer variables using void 
data type. Pointer variables are different from the variables we have just learnt).

9. In C language declaration of variables should come before any action statement. 
All statements except declaration statements are known as action statement.

10. char variable consumes 1 byte in memory,it is because they are designed to contain integer value which is a code of assigned character. 
This coding is known as ASCII (American Standard Code for Information Interchange). 

For Example:  

char x = ’a’; 
In the above statement, x is assigned with a character symbol ‘a’, whose ASCII code is 97, 
thus x is assigned a number 97. We can also alternatively write char x=97; 
When we write ASCII code instead of ASCII character, do not enclosed with single quotes. 
There are 256 ASCII characters whose codes ranges from 0 to 255. 


*/