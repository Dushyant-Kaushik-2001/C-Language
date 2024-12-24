/*

-------------------------------------------------------Software Development in C------------------------------------------------------------

1. We want to make software that is an exe file. 
Executable file is machine dependent coding. 
It is hard to remember machine codes. 
Thus creating exe file by typing machine code is hell lot of task. 
So we prefer to write code in comparatively simple language called C language and then convert C language code into machine code using
some software (translator). 

2. Create a file with name of our choice but extension must be .c, this file is known as source file. 

3. Sometimes we added statements in our program which are required to preprocess ( We will learn about them later).
Such statements are handled by a program called Preprocessor. Preprocessor generate a file for the compiler.

4. Compiler then translates our code into machine code. Compiler may generate error if your code is not written according to the rules. 
A code with no error is successfully compiled and saved with extension .o or .obj, this file is known as object file.

5. Linker software then links your object file with the library code (library code resides in library files), and as a result yield an 
executable file (extension .exe) , which we call our developed software. 


*/