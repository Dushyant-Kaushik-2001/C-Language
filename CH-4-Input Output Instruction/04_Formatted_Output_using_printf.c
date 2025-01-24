/*
-----------------------------------------------------Formatted output using printf()--------------------------------------------------------

Ques. We can print our name on the first line and surname on the second line by using special character ‘\n’.
*/

#include <stdio.h>
#include <conio.h>
int main()
{
    printf("Dushyant\nKaushik");
    getch();
}

/*
Remember: 
Using another printf is not going to print surname on the next line. 
We have to use ‘\n’ which is a special character also known as new line character. 
We can experiment other such special characters, known as escape sequences.

Escape Sequences:

\n      New line character 
\t      Same as tab key
\b      Same as backspace key 
\r      carriage return, it moves cursor at the starting place of the current line
\\      to print backslash single time 
\”      to use double quotes as printable character 





*/
