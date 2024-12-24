/*

---------------------------------------------------------Identifiers/Tokens in C------------------------------------------------------------------------

1. Smallest identifying unit in the program is known as Identifiers/Tokens. 

2. In English we call it a word. 

3. In programming language it is known as Tokens. 

4. Tokens can be categorized as constants, variables, keywords, operators, macros, functions, etc. 

As of now we are only going to see constant, variable and keywords. Rest of the Tokens will be covered in later chapters.

5. In the C programming language, tokens are the smallest units of a program that the compiler recognizes and processes. 
Tokens are the building blocks of C programs.

Ques. what is the identifiers and tokens?
Ans. tokens bhut saare cheeze hain jaise ki operator hain, keywords hai matlab saare identifiers token hain lekin saare token identifier
ho ye jaruri nhi hai.


-----------------------------------------------Categories of Tokens in C------------------------------------------------------------------
There are six main types of tokens in C:

1. Keywords:

(a). Reserved words in C that have a predefined meaning and cannot be used for variable names or other identifiers.
(b). Examples: int, float, if, else, return, while.
(c). Usage:
     int x = 10;                        // 'int' is a keyword.


2. Identifiers:

(a). Names used to identify variables, functions, arrays, or other user-defined elements.
(b). Rules for Identifiers:
1. Must start with a letter (A-Z, a-z) or an underscore (_).
2. Followed by letters, digits (0-9), or underscores.
3. Cannot be a keyword.
(c). Examples: variable1, _myFunction, count.
(d). Usage:
     int count = 5;                   // 'count' is an identifier.


3. Constants:

(a). Fixed values in a program that do not change during execution.
(b). Types of constants:
1. Integer Constants = 10, 0x1A (hexadecimal).
2. Floating-Point Constants = 3.14, 2.5e3.
3. Character Constants = 'a', '1'.
4. String Constants = "Hello, World!".
5. Usage:
    const int PI = 3.14;                  // '3.14' is a constant.


4. Operators:

(a). Symbols used to perform operations on variables and values.
(b). Types of operators:
1. Arithmetic =   +, -, *, /, %.
2. Relational =   ==, !=, <, >, <=, >=.
3. Logical =      &&, ||, !.
4. Bitwise =      &, |, ^, ~, <<, >>.
5. Assignment =   =, +=, -=, *=, /=.
(c). Usage:
       int sum = 10 + 20;                          // '+' is an arithmetic operator.


5. Strings and Characters:

(a). Strings = A sequence of characters enclosed in double quotes (" ") and terminated by a null character (\0).
(b). Characters = Enclosed in single quotes (' ') and represent a single character.
(c). Examples:
1. String: "Hello"
2. Character: 'H'
(d).Usage:
char ch = 'H';                          // Character token.
char str[] = "Hi";                     // String token.


6. Special Symbols:

(a). Symbols with special meanings in C:
1. Parentheses = ()
2. Braces = {}                                  (used for code blocks)
3. Brackets = []                                (used for arrays)
4. Comma = ,                                    (used to separate items)
5. Semicolon = ;                                (used to terminate statements)
6. Punctuation Marks = ., ->, #
(b). Usage:
int arr[5] = {1, 2, 3, 4, 5};                                                  // '{}' and '[]' are special symbols.


7. Punctuation:

(a). Specific symbols used to structure the code and define its syntax.
(b). Examples =  ;, ,, ., :
(c) Usage:
printf("Hello, World!");                                                             // ';' is a punctuation token.



*/