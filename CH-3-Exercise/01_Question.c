/*

Ques.1. What are the primitive data types in C Language?
Ans. 
The primitive data types in C are the basic data structures that are already defined in the language and are used to store a single value. They are the foundation of data manipulation and cannot be further divided into simpler data types.
Some of the primitive data types in C include:

1.int.
2.char.
3.float.
4.double.
5.void.

int variable consumes 4 bytes in memory, char variable takes 1 byte, float takes 4 bytes and double takes 8 bytes in memory.
Variable of type int can store integers, char variable is used to store character constant, float and double variables are used to store 
real constant.


*************************************Key Differences Between Primitive and Non-Primitive Data Types*****************************************

Feature	                      Primitive Data Types	                                Non-Primitive Data Types
Definition	           Simple types built into the language	                        Complex types, often defined by the programmer (e.g., classes, arrays)
Size	               Fixed size(eg.4 bytes for int,8 bytes for double)            Variable size depending on data structure or object
Memory Allocation	   Stored directly in memory (value is stored)	                Stored by reference (points to memory location of the object/data)
Examples	                   int, char, float, boolean	                        String, Array, List, Object, Class
Operations	       Cannot have methods or properties, only basic operations	        Can have methods and properties to manipulate data
Storage	                      Holds the actual value	                            Holds a reference to the value or object
Efficiency	            More memory efficient, faster for simple operations	        May consume more memory and processing time due to complexity


*********************************************************Summary**************************************************************************

1. Primitive data types are simple and directly represent values (e.g., integers, characters, booleans).

2. Non-primitive data types are more complex structures that can store multiple values and have additional functionality, 
often implemented using objects and classes (e.g., arrays, strings, objects).

3. In object-oriented languages like Java, C++, and Python, primitive types are essential for basic operations, 
while non-primitive types provide more flexibility for creating complex applications.


*/