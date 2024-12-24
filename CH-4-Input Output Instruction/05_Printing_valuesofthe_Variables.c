/*

----------------------------------------How to Printing values of the variables and expressions-----------------------------------------------

Maan lijiye maine kisi program ke andar variable bnaya hua hai a naam ka aur uski value hai 5.
Ab main ye chahta hu ki main a variable ki value ko print kru toh kese krunga 
let see:

int a = 5;

CASE 1 : 
                    printf("a");

toh kya a ki value print ho jaayegi yha par? Nhi print hoga a.                       Incorrect*
Par kyu? Kyunki print vo hota hai jo double quotes ke beech mein hota hai.

CASE 2 : 
                  printf("5");

Beshak aisa krne se screen p 5 print ho jaayega.                                     Incorrect*
par kya ye a ki value print ho rahi hai? Nhi ye 5 print ho ra hai yha p 6 hota hai to 6 prtint ho jaata.

**NOTE = ye dono tarike galat hain toh sahi kiya hai? Sahi tarika hai case 3 mein.

CASE 3 : 
                printf("%d",a);

ye tarika sahi hai isse print ho jayeegi a ki value jo hai 5.                Correct*
Lekin ye %d kya hai? This is Called Format Specifiers.


---------------------------------To print values of the variables we have to use format specifiers---------------------------------------

1. %d for int 
2. %c for char 
3. %f for float 
4. %lf for double 

%d, %c, %f, %lf are called format specifiers. 

They are special symbols used to tell printf about the format in which data should be printed.

printf(“%d”,a);  

The above statement prints the value of variable a. 
Here we have to assume that the variable is of int type. 
Basically %d, tells the printf to print content of a (which is a sequence of 0s and 1s) after converting into a number in base 10, 
that is decimal number system. 


CASE 4 : 
                    printf("a=%d",a);

What is the output?
Ab hum sochenge iska output aana chaiye 5 lekin 5 galat jawab hai.
But Why?
kyunki double quotes("") mein jo likhte hain vo As it is print hota hai to finally iska answer aayega
a=5
Note= %d se seekho tyaag ki bhavna bechara khud print nhi hota jo bahar likha hota hai ,(Comma) ke baad use print krta hai.


CASE 5 : 
                printf("Value of a is %d",a);

What is the Output?
Value of a is 5.


CASE 6 : 
                  Printf("%d%d",a);

What is the Output?
Error kyunki ek d ki value to ho gyi 5 aur doosre ki d ki value kon dega to error aayegi.


CASE 7 : 
                PrintF("%d%d",a,a);

What is the Output?
Answer is 5 5.

CASE 8 : 
              printf("%d%d%d",a,a*a,a*a*a);                    // a*a = Expression

What is the Output?
Answer is 5 25 125.

*/