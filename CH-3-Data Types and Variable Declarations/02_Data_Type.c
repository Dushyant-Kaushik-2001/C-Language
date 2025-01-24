/*
---------------------------------------------------------Data Types--------------------------------------------------------------------------

1. C mein data types ka matlab hota hai data ka type batana.
Humhare program ko yeh batana zaroori hota hai ki variable mein kis type ka data store hoga:
Number (jaise 5, 3.14)
Character (jaise 'A', 'B')

2. Suppose, hum ek dibba (variable) banate hain, lekin hume ye batana padta hai ki usme kya rakhoge:
Integer (numbers)
Decimal numbers (floating point)
Characters (single letter)

3. Data types are keywords can be used on various occasions to specify the kind of data. One use of data type is to declare variables. 
 
NOTE = Saare keywords data type nhi hai lekin ye kuch keywords hain jo data type hain. Data type yaani data ki category.


--------------------------------------------------Types of Data Types in C-------------------------------------------------------------------

C mein data types 3 main categories mein aate hain:

1. Basic Data Types

int: Whole numbers (e.g., 5, -10)
float: Decimal numbers (e.g., 3.14, -0.5)
char: Single character (e.g., 'A', '$')
double: Large decimal numbers (e.g., 3.14159265)

2. Derived Data Types

Array: Same type ke elements ka collection (e.g., numbers ka group).
Pointer: Memory address ko store karta hai.

3. User-Defined Data Types

struct: Custom group of variables.
enum: Constants ka set.


-------------------------------------------------Memory Size of Basic Data Types-------------------------------------------------------------

Har data type ka apna size hota hai:

Data Type	                   Size (Bytes)	                                    Example
int	                               4	                                         5, -10
float	                           4	                                       3.14, -0.5
double	                           8	                                     3.141592653589
char	                           1	                                      'A', 'B', '$'


-----------------------------------------------------Real-Life Example-----------------------------------------------------------------------

Socho Humhare paas ek box hai:
Agar usme hum sirf integers rakh sakte hain, toh wo box ka type int hoga.
Agar humhe decimal numbers rakhne hain, toh box ka type float hoga.

*/