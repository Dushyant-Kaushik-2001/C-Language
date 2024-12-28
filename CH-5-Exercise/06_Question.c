// Ques.6.Write a program to calculate size of a character constant.

#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;

    printf("%d bytes", sizeof(char));                                                            //          printf("%d", sizeof(ch));
    getch();
}








/*
Ques. What is a character constant in C programming?
Ans.Character constant C programming language mein ek constant hota hai jo ek single character ko represent karta hai. 
Yeh constant single quotes (' ') mein likha jata hai.

*************************************************Character Constant Characteristics************************************************************

1. Character constant mein sirf ek single character hota hai, jaise 'A', 'b', '1', ya '%'.

2. Character constants ko single quotes mein likha jata hai, jaise 'A', 'z', '%', '5'

3. C mein character constants ko internally unke ASCII value ya Unicode value ke roop mein store kiya jata hai. Jaise:
'A' ki ASCII value 65 hoti hai.
'B' ki ASCII value 66 hoti hai.
'1' ki ASCII value 49 hoti hai.
'%' ki ASCII value 37 hoti hai.

4. Character constants ka size typically 1 byte hota hai (system aur compiler ke hisaab se). 
Hum sizeof operator se character constant ka size nikal sakte hain.


************************************************Escape Sequences in Character Constants***************************************************

Character constants mein kuch special characters ko represent karne ke liye escape sequences ka use hota hai, jaise:

\n - Newline
\t - Horizontal tab
\' - Single quote
\" - Double quote
\\ - Backslash

*/