/*

Ques.5.What is the difference between float and double?
Ans.
Feature	                     float	                                 double
1.Size	                     4 bytes	                             8 bytes
2.Precision	            ~6-7 decimal digits	                        ~15-16 decimal digits
3.Performance	        Faster, less memory-intensive	            Slower, more memory-intensive
4.Usage	                Graphics, games, low precision	            Scientific computations, high precision

Which One to Use?

(A) Use float when:
1. Memory is constrained.
2. Precision requirements are moderate.
3. Performance is critical (e.g., in real-time systems or games).

(B) Use double when:
1. High precision is required (e.g., scientific or financial calculations).
2. The range of numbers is very large or very small.


Ques.5. What is the difference between char and int?
Ans. Summary of Differences:
Feature	                             char	                                            int
Purpose	                  Stores a single character (e.g., 'A', 'a')	  Stores integer values (e.g., 10, -5)
Size	                  Typically 1 byte (8 bits)	                      Typically 4 bytes (32 bits)
Range	                 -128 to 127 (signed) or 0 to 255 (unsigned)	-2,147,483,648 to 2,147,483,647 (signed)
Value Representation	    Character values (ASCII/Unicode)	            Integer numbers (whole numbers)
Operations	            Can be treated as integers for arithmetic	          Supports arithmetic operations
Example	                           'A', 'z', '7'	                                   10, -255, 300

Key Points:
1. char is used to represent characters and is typically smaller (1 byte) than int, which is used to represent integer numbers and is 
typically larger (4 bytes).
2. char stores characters as numeric values (like ASCII codes), whereas int stores whole numbers directly.


*/