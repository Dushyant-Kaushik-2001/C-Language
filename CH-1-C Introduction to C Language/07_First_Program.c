#include <stdio.h>
#include <conio.h>
int main()
{
    printf("Hello World!");
    getch();
}


/*
Example explained:
Line 1: 
#include <stdio.h> is a header file library that lets us work with input and output functions, such as printf() (used in line 4). 
Header files add functionality to C programs.
Don't worry if you don't understand how  #include <stdio.h> works. 
Just think of it as something that (almost) always appears in our program.

Line 2: A blank line. C ignores white space. But we use it to make the code more readable.

Line 3: Another thing that always appear in a C program is main(). This is called a function. 
Any code inside its curly brackets {} will be executed.

Line 4: printf() is a function used to output/print text to the screen. In our example, it will output "Hello World!".

Note that: Every C statement ends with a semicolon ;

Note: The body of int main() could also been written as:
int main(){printf("Hello World!");return 0;}

Remember: The compiler ignores white spaces. However, multiple lines makes the code more readable.

Line 5: return 0 ends the main() function.

Line 6: Do not forget to add the closing curly bracket } to actually end the main function.


Finally, the first C program introduces the C programming language and its fundamental structure. 
It illustrates the necessary components for writing, compiling, and running a C program.

The program contains the standard input-output library (stdio.h), which includes routines for output operations such as printf(). 
The main() function is the program's entry point, from which execution begins. 
The printf() function is used within the main() method to print the message "Hello, C Language" to the console.

A C compiler such as GCC is required to compile the program. The code is stored in a text file with the .c extension, and the compiler 
is started by typing gcc, followed by the names of the input and output files.

The compilation process converts machine-readable instructions from human-readable C code. 
Once the program has been successfully constructed, it may be started by double-clicking the resultant executable file. 
In a terminal or command prompt, the executable is called by its file name, followed by ./. 
After that, the program is performed, and the "Hello C Language" output is shown on the console.

*/