//Ques.Write a C Program to print own name on the Screen.

#include <stdio.h>                              // stdio.h ek header file hai (standard input output header file) jiske andr prinf function ka decleration mojjood hai
#include <conio.h>                             // conio is also header file (console input output)
int main()
{
    printf("Dushyant kaushik");                // printf ek output instruction hai monitor par kuch print krta hai vhi getch ek input instruction hai jo ek character keyboard se ek baar mein leta hai
    getch();                                   // getch means get = yaani le ra hai   and ch = yaani character
}                                              // getch ek input instruction hai getch ka kaam hai keyboard se ek character lena


/*

*************************************************************NOTE POINT:**********************************************************************

1. Above Program is the program to print name Dushyant kaushik. 

2. We can write anything in double quotes inside the parenthesis of printf().

3. Jab tak getch() ka declearation nhi krenge tab tak neeche console mein warning msg aata rhega.

4. Jab tak getch() nhi tha tab tak koi warning nhi aa rhi thi.

5. getch() bhi ek predefined Function jiska decleration ek alg header file mein hai usko bhi include krna chaiye toh vo hai <conio.h>.

6. Conio ka matlab hai console input output.

7. About getch(): 
(a) getch() is also a predefined function. 
(b) Its job is to take one character from the keyboard.
(c) Its job will be over only when you presses a key from the keyboard. 

We can use getch() as a trick. In the above program, we cannot see output because as soon as the printf() statement completed its job, 
program terminates, output screen vanishes. 
There is only one line in the program, so we strategically placed getch() function after printf() to avoid screen termination. 
Until we presses a key, the last line (getch()) is not over. 
So we will be able to see output screen, as it will only shut down when the last line finishes its job.  
 
 
*****************************************************NOTE Symbols:*****************************************************************************

1. () pronounced as parenthesis 
2. < > Angular brackets 
3. [ ] Square brackets 
4. { } Curley braces 


*********************************************************NOTE*******************************************************************************

1. Jo hmari file bnegi .exe jab hum us par double click krke usko chalayenge to vo jo black colour ki window hai jispar hmara output
print hota hai usko bolte hain console.

2. Jo Software hum c language mein bnaate hain inko hum bolte hain Console based applications.
Kyunki inmein output window black colour ki aati hai aur is window ke saath interact User text based krta hai.
Text ki form mein input text ki form mein output.
 
*/