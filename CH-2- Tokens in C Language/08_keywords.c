/*

----------------------------------------------------------Keywords------------------------------------------------------------------------

1. Keywords are predefined words; their meaning is already known to compiler. 
Every word we are using in the program must have known to compiler. 
If the meaning is not known to compiler then it will yield an error. 
To avoid error, we have to declare such words to compiler by declaration statements.

Note = Keywords is also called predefined Words or reserved Words.

2. Keywords are the words, whose meaning is already defined; we can directly use them for specific reason. 

3. In C, keywords are reserved words that have predefined meanings in the language. 
These cannot be used as variable names, function names, or identifiers. 
They form the backbone of C's syntax and are used to perform various programming operations.

4. There are 32 keywords according to the ANSI standard, but sometimes compiler may support additional keywords too.
auto,break,case,char,continue,const,do,double,default,enum,else,extern,for,float,goto,if,int,long,register,return,short,signed,sizeof,
static,struct,switch,typedef,union,unsigned,void,volatile,while.

5. Categories of Keywords:

(a). Data Type Keywords = These are used to define the type of data.
.int, float, double, char
.long, short, unsigned, signed
.void

(b). Control Flow Keywords = These are used to control the flow of a program.
.if, else, switch, case, default
.for, while, do, break, continue
.goto

(c). Storage Class Keywords = Define the scope, visibility, and lifetime of variables/functions.
.auto, register, static, extern

(d). Memory Management Keywords = Define memory-related properties.
.sizeof, typedef

(e). Special Keywords:
.return          (used to return from a function)
.volatile        (prevents the compiler from optimizing certain variables)
.const           (makes a variable's value unchangeable)
.enum            (enumerations)
.union           (special data structure)
.struct          (used to create structures)

6. Things to Note:

(a) Keywords are case-sensitive.
int is valid, but Int is not.

(b) Cannot be used as identifiers for variables, functions, or other user-defined elements.

(c) Certain keywords might have additional meanings in modern extensions of C (e.g., inline in C99).




*/