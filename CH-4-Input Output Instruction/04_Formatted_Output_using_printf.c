/*
-----------------------------------------------------Formatted output using printf()--------------------------------------------------------
Ques. We can print our name on the first line and surname on the second line by using special character ‘\n’.
*/

#include <stdio.h>

int main()
{
    printf("Dushyant\nKaushik");
    return 0;
}

/*
----------------------------------------------------------Remember:--------------------------------------------------------------------------

1. Using another printf is not going to print surname on the next line.

2. We have to use ‘\n’ which is a special character also known as new line character.

3. We can experiment other such special characters, known as escape sequences.

-----------------------------------------------------Escape Sequences:------------------------------------------------------------------------

1. \n      New line character
2. \t      Same as tab key
3. \b      Same as backspace key
4. \r      carriage return, it moves cursor at the starting place of the current line
5. \\      to print backslash single time
6. \”      to use double quotes as printable character





*/
