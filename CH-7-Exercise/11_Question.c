//Ques.11.Write a program to print MySirG N times on the screen.

#include <stdio.h>
#include <conio.h>
int main()
{
    int n,i = 1;                                           // Initialization
    printf("Enter the number of times to print MySirG: ");
    scanf("%d", &n);
    while (i <= n)                                      // Condition
    {
        printf("MySirG\n");                            // Print statement
        i++;                                          // Increment to avoid infinite loop
    }

    getch();
}


/*
Explanation:

1. Variable Declaration: Variable n and i are declared.
(a). N: Ye variable user ke input ke liye hai, jisme user bataayega ki woh "MySirG" ko kitni baar print karna chahta hai.
(b). i: Ye variable loop ka counter hai, jise hum har iteration ke baad increment karenge.

2. User Input:
(a). printf(): Is statement ke through program user ko prompt karta hai ki woh bataaye ki "MySirG" ko kitni baar print karna hai.
(b). scanf(): Ye function user se integer input leta hai aur %d format specifier se N mein store karta hai.

3. While Loop:
(a). Condition (i <= N): Jab tak i ki value N se chhoti ya barabar hoti hai, tab tak loop chalta rahega.
(b). printf("MySirG\n");: Har iteration mein MySirG print hota hai. \n ka matlab hai new line, taaki har baar ek nayi line pe "MySirG" print ho.
(c). i++: Har baar loop ke andar i ko 1 se increment kiya jaata hai, taaki agla iteration ho sake.


*********************************************************Alternate Solution****************************************************************

#include <stdio.h>
#include <conio.h>
int main()
{
    int n,i;
    printf("Enter the number of times to print MySirG: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        printf("MySirG\n");
    }

Explanation:

1. Variable Declaration: We have declared two variables N and i.
(a). N: Ye variable user se input lene ke liye use hota hai, jisme hum number of times "MySirG" ko print karne ka value store karenge.
(b). i: Ye loop ka counter hai jo iteration ko track karega. Hum isse loop me increment karenge.

2. User Input:
(a). printf(): Is statement se user ko prompt diya jaata hai ki woh "MySirG" ko kitni baar print karna chahta hai.
(b). scanf(): Ye function user se input leta hai. %d format specifier ke through hum integer value N mein store karte hain.

3. For Loop:
(a). for (i = 1; i <= N; i++): Ye loop i = 1 se start hota hai aur i <= N condition ke through repeat hota hai. 
Jab tak i ki value N ke barabar ya usse kam hoti hai, loop chal raha hota hai. Har iteration ke baad i++ se i ki value 1 se badh jaati hai.
(b).printf("MySirG\n");: Har iteration mein MySirG ko print kiya jaata hai. \n se ek new line insert hoti hai, taaki har baar "MySirG" 
nayi line pe print ho.


*/