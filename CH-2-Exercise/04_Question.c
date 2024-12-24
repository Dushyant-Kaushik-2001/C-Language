/*

Ques.4. Keywords are defined in the compiler or their meaning is stored in the library?

Ans.Keywords are defined in the compiler and are integral to the language's syntax. 
Their functionality is built into the compiler, whereas functions or definitions in libraries extend the language's capabilities.

Keywords are defined in the compiler, not in the library. Here's why:

1.Keywords as Reserved Words:

Keywords are part of the syntax and grammar of a programming language.
They have predefined meanings and purposes that cannot be changed by the programmer. 
For example, in C, if, while, and return are keywords.

2.Role of the Compiler:

1.The compiler is designed to recognize these keywords during the parsing stage of code compilation.
2.The meaning and behavior associated with these keywords are embedded in the compiler's implementation.

3.Difference Between Keywords and Library Functions:

Library Functions: Functions like printf() or sqrt() are not part of the core language. 
Their definitions and implementations are stored in standard libraries, and they are included during compilation via header files 
(e.g., <stdio.h> or <math.h> in C).

Keywords: Their functionality is hardcoded into the compiler itself and does not rely on external libraries.

Example in C:
if is a keyword, and the compiler directly understands it as a conditional branching statement.
printf is not a keyword; it is a function defined in the standard I/O library (<stdio.h>), and its implementation resides in the library, 
not in the compiler.



*/