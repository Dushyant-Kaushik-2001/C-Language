/*
-----------------------------------------------------------while loop------------------------------------------------------------------------

Following is the syntax of while loop: 
...
while(some condition)
{

       statement1;
       statement2;
       ...
}
...

while loop C programming mein ek iteration statement hai jo tab tak execute hota hai jab tak condition true hoti hai. 
Iska use hum tab karte hain jab hume ek block of code ko repeatedly execute karna ho, par hume nahi pata ki kitni baar loop chalega 
(loop ki iterations input ya kisi condition par depend karti hai).

1. while ek keyword hai. Ye C programming mein ek reserved word hai jo looping ke liye use hota hai.
2. while if statement jaisa lagta hai, lekin ek important farak hai:
Jab while block khatam hota hai to control wapas while pe aa jaata hai, aur condition dobara check hoti hai.
3. while block ek set of statements ka collection hota hai:
Ye curly braces {} ke andar hota hai, jo while(some condition) ke baad likha jaata hai.
4. while ke baad jo parenthesis (()) hote hain, woh kabhi khali nahi ho sakte:
Matlab parenthesis ke andar hamesha koi condition likhi jaati hai.
5. while (condition) ke baad kabhi semicolon nahi aata:
Kyunki while statement us jagah pe terminate nahi karta, pura block execute hone ke liye tayar hota hai.
6. Jo bhi parenthesis ke andar likha hota hai, use true ya false evaluate kiya jaata hai:
Condition true hone par loop execute hota hai, aur false hone par nahi.
7. Agar condition false hai, toh control seedha while block ko skip kar deta hai Matlab:
Loop ke andar ka code nahi chalega.
8. Agar condition true hai, toh control while block ke andar enter karta hai:
Aur block ke andar jo statements hain, unhe execute karta hai. Block ke end par aakar wapas while pe jaata hai aur condition fir check karta hai.
9. Jab tak condition true hai, yeh process repeat hota hai:
Condition false hone tak while block baar-baar execute hota rahega.
10. while loop ko entry control loop kaha jaata hai:
Kyunki control while block ke andar tabhi jaata hai jab condition check karke true hoti hai.
11. Loop ko control karne ke liye, condition ko iteration ke hisaab se change karna zaroori hota hai:
Agar condition iteration ke saath change nahi hoti, toh loop infinite ban sakta hai.


EXAMPLE:
Assume, We want to print mysirg five times on the screen. We can do it either by writing printf five times or by using loop. 
Loop is the smarter approach. It reduces our efforts of writing printf multiple times. We can write printf only once and iterate it for five times. 
*/

#include<stdio.h>
int main()
{
  int i=1;                           // Initialization
  while(i<=5)                       // condition
  {
     printf("mysirg\n");
     i++;                           // Flow
  }
return 0;
}

/*
Explanation:

1. In the above program, we have used variable i, which is initialized by 1. 

2. Control then comes to while statement. Condition i<=5 should be read as ‘1 less than or equal to 5’, which is true. 
Control enters into the while block, printing mysirg for the first time. On 6th line i++; the value of i is increased to 2. 
Control reaches to the end of while block. From there it again moves to while’s condition i<=5, but due to the change in value of i, 
we now read it as ‘2 less than or equal to 5’.

3. Keep moving control in this way, at one point of time, value of i becomes 5 and ‘mysirg’ is printed for the 5th time, 
then i is incremented to 6. Control reaches at the end of while block and from there it goes again to the condition i<=5; 
read it as ‘6 is less than or equal to 5’, which is false. 
Control simply skipped the while’s body. 

4. Notice that the condition is checked for 6 times (5 times true, 1 time false). 

5. i++; is an important step, otherwise looping never ends. 

6. Initialization (i=1), condition (i<=5) and flow (i++) are logical constructs to control the number of iteration.


**************************************************************Key Points******************************************************************

1. while loop mein initialization ka dhyan rakhna zaroori hai, warna infinite loop ban sakta hai.
2. Loop ko terminate karne ke liye condition ka false hona zaroori hai.
3. Agar condition starting mein hi false ho, toh loop ek baar bhi execute nahi hoga.

*/