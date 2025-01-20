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

4. Compiler then translates our code into machine code. Compiler may generate error if our code is not written according to the rules. 
A code with no error is successfully compiled and saved with extension .o or .obj, this file is known as object file.

5. Linker software then links our object file with the library code (library code resides in library files), and as a result yield an 
executable file (extension .exe) , which we call our developed software. 


----------------------------------------------------Compilation process in c----------------------------------------------------------------

What is a compilation?
Ans. The compilation is a process of converting the source code into object code. It is done with the help of the compiler. 
The compiler checks the source code for the syntactical or structural errors, and if the source code is error-free, then it generates 
the object code.
Compilation ek process hai jo source code ko object code mein convert karta hai. Ye process compiler ke help se kiya jata hai. 
Compiler source code ko check karta hai syntactical ya structural errors ke liye. 
Agar source code error-free hota hai, to ye object code generate karta hai.

The c compilation process converts the source code taken as input into the object code or machine code. 
C compilation process source code ko input ke roop mein leta hai aur usse object code ya machine code mein convert karta hai
The compilation process can be divided into four steps, i.e., Pre-processing, Compiling, Assembling, and Linking.

The following are the phases through which our program passes before being transformed into an executable form:

1. Preprocessor
2. Compiler
3. Assembler
4. Linker

1. Preprocessor:
Preprocessor source code ko input ke roop mein leta hai aur comments ko remove karta hai.
Preprocessor directive ko interpret karta hai. Jaise agar <stdio.h> directive program mein ho, to preprocessor use interpret karta hai 
aur stdio.h file ka content wahan replace kar deta hai.
The preprocessor takes the source code as an input, and it removes all the comments from the source code. 
The preprocessor takes the preprocessor directive and interprets it. For example, if <stdio.h>, the directive is available in the program, 
then the preprocessor interprets the directive and replace this directive with the content of the 'stdio.h' file.

2. Compiler:
Preprocessed code compiler ko pass hota hai.
Compiler is code ko assembly code mein convert karta hai.

3. Assembler:
Assembly code assembler ke paas jata hai jo ise object code mein convert karta hai.
Object file ka naam source file ke jaisa hota hai, bas extension alag hoti hai (e.g., .obj in DOS aur .o in UNIX).
The extension of the object file in DOS is '.obj,' and in UNIX, the extension is 'o'. 
If the name of the source file is 'hello.c', then the name of the object file would be 'hello.obj'.

4. Linker:
Mainly, all the programs written in C use library functions. 
These library functions are pre-compiled, and the object code of these library files is stored with '.lib' (or '.a') extension. 
The main working of the linker is to combine the object code of library files with the object code of our program. 
Sometimes the situation arises when our program refers to the functions defined in other files; then linker plays a very important role in 
this. It links the object code of these files to our program. 
Therefore, we conclude that the job of the linker is to link the object code of our program with the object code of the library files and 
other files. The output of the linker is the executable file. 
The name of the executable file is the same as the source file but differs only in their extensions. 
In DOS, the extension of the executable file is '.exe', and in UNIX, the executable file can be named as 'a.out'. 
For example, if we are using printf() function in a program, then the linker adds its associated code in an output file.

Zyada tar C programs mein library functions ka use hota hai. 
Ye library functions pehle se hi compile hote hain aur unka object code '.lib' ya '.a' extension wale files mein stored hota hai. 
Linker ka main kaam hota hai ki in library files ke object code ko hamare program ke object code ke saath combine kare.
Kabhi-kabhi hamare program mein aise functions hote hain jo kisi doosri file mein defined hote hain. 
Aise case mein, linker bahut important role play karta hai, kyunki ye un doosri files ke object code ko program ke saath link karta hai. 
Isliye, linker ka kaam hota hai hamare program ke object code ko library files aur doosri files ke object code ke saath link karna.
Linker ka output ek executable file hota hai. Ye executable file source file ke naam ke jaisa hota hai, bas extension alag hoti hai. 
DOS mein executable file ka extension '.exe' hota hai, aur UNIX mein ise 'a.out' naam diya jata hai.
Example ke liye, agar hum program mein printf() function use karte hain, to linker uska associated code output file mein add karta hai.

Let's understand through an example:

Agar hello.c source file hai, to:

1. Firstly, the input file, i.e., hello.c, is passed to the preprocessor, and the preprocessor converts the source code into expanded 
source code. The extension of the expanded source code would be hello.i.
Preprocessor hello.c ko expanded source code (hello.i) mein convert karega.

2. The expanded source code is passed to the compiler, and the compiler converts this expanded source code into assembly code. 
The extension of the assembly code would be hello.s.
Compiler expanded source code ko assembly code (hello.s) mein convert karega.

3. This assembly code is then sent to the assembler, which converts the assembly code into object code.
Assembler assembly code ko object code (hello.obj ya hello.o) mein convert karega.

4. After the creation of an object code, the linker creates the executable file. 
The loader will then load the executable file for the execution.
Linker object code ko library files ke saath link karke executable file banayega.


*/