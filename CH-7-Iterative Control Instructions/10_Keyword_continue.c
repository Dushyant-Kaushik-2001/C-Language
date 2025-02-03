/*
----------------------------------------------------------------Keyword Continue-----------------------------------------------------------

continue keyword ka use loops (for, while, do-while) ke andar kiya jata hai, jab hume current iteration ko skip karke next iteration start 
karni ho.
🔹 Kaise Kaam Karta Hai?
Jab continue execute hota hai:
1. Baaki ka code skip ho jata hai us iteration ke liye.
2. Loop ka next iteration start ho jata hai.

🔹 Points to Remember:
1. The keyword continue is used only in the body of loop. 
2. It is used to move control at termination condition in the case of while and do-while loop.  
3. continue is used in for loop to transfer control at flow part. 
4. Continue transfers the control to the next iterations.


Example 1:
*/
#include<stdio.h>
int main()
{
  int x;                           
  while(1)                       
  {
     printf("Enter an even number:");
     scanf("%d",&x);
     if(x % 2 == 1)
          continue;
    else
     {
         printf("This is the correct value");
         break;
     }
                                
   }
   return 0;
}
/*
Explaination:
1. In the above program, while loop ki condition hamesha TRUE evaluate hoti hai.
C programming mein koi bhi non-zero number TRUE maana jata hai aur zero FALSE hota hai.
2. Ye loop sirf tabhi end hoga jab break execute hoga.
3. Agar user ek odd number enter karta hai, toh condition x % 2 == 1 TRUE ho jati hai, aur tab continue kaam karta hai. 
4. continue control ko wapas while(1) par transfer kar deta hai (loop condition ke check par). 
5. Jab tak user odd numbers enter karta rahega, continue kaam karega. Lekin jaise hi user ek even number enter karega, 
break loop ko terminate kar dega.
*/
