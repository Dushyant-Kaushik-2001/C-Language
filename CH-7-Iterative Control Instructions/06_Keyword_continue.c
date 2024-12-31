/*
----------------------------------------------------------------Keyword Continue-----------------------------------------------------------

continue keyword C programming mein ek control statement hai jo loop ke ek iteration ko skip karne ke liye use hota hai. 
Jab continue execute hota hai, toh loop ke baaki statements ko skip karke next iteration shuru hoti hai.
continue ka use kisi specific condition par ek iteration ko skip karne ke liye hota hai.
For, While, Do-While Loops saare loops ke saath continue ka use kiya ja sakta hai.

1. The keyword continue is used only in the body of loop. 
2. It is used to move control at termination condition in the case of while and do-while loop.  
3. continue is used in for loop to transfer control at flow part. 


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
2. Yeh loop sirf tabhi end hoga jab break execute hoga.
3. Agar user ek odd number enter karta hai, toh condition x % 2 == 1 TRUE ho jati hai, aur tab continue kaam karta hai. 
4. continue control ko wapas while(1) par transfer kar deta hai (loop condition ke check par). 
5. Jab tak user odd numbers enter karta rahega, continue kaam karega. Lekin jaise hi user ek even number enter karega, 
break loop ko terminate kar dega.


Example 2: continue in a while Loop
#include <stdio.h>
int main() 
{
    int i = 0;

    while (i < 10) 
    {
        i++;
        if (i == 5) 
        {
            continue;                                                               // 5 ko skip kar do
        }
        printf("%d\n", i);
    }
    return 0;
}
Output:
1
2
3
4
6
7
8
9
10
Explanation : Jab i == 5 hota hai, continue loop ke baaki code ko skip karta hai aur next iteration par chala jata hai.


Example 3: continue in a for Loop
#include <stdio.h>
int main() 
{
    for (int i = 1; i <= 10; i++) 
    {
        if (i % 2 == 0) 
        {
            continue;                                                                    // Even numbers ko skip kar do
        }
        printf("%d\n", i);                                                               // Sirf odd numbers print honge
    }
    return 0;
}
Output:
1
3
5
7
9
Explanation : Jab i even hota hai (i % 2 == 0), continue execute hota hai aur printf statement skip ho jata hai.


Example 4:continue in a Nested Loop
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=4;i++)
    {
    for(j=1;j<=3;j++)
        {
          printf("i=%d j=%d",i,j);
        }
       printf("\n");
    }
}
Explaination:

1. Upar wale example mein printf("i=%d j=%d ", i, j); statement 12 baar execute hoga. Dry run karne se iska execution samajh aayega.
Jab i ki value 1 hoti hai, toh inner loop 3 baar run karega aur output hoga:
i=1 j=1  
i=1 j=2  
i=1 j=3  
Uske baad printf("\n") cursor ko agle line par le jata hai.
Control phir outer for loop par wapas jata hai aur i ki value increment hoti hai.
Yeh process 4 baar repeat hoti hai (jab i=1, 2, 3, 4).

2. Hum for loop ke parentheses ko blank chhod sakte hain (bas do semicolons ; zaruri hain). Yeh ek infinite loop mana jata hai.

3. Hum while loop ke parentheses ko khali nahi chhod sakte.

4. Hum do-while loop ke parentheses khali chhod sakte hain, lekin semicolon ; lagana zaruri hai.

5. Loop ke body mein multiple statements ho sakte hain.

6. Ek loop ke andar dusra loop ho sakta hai, ise nested loop kaha jata hai.

7. Loop ke andar switch statement ho sakta hai aur switch ke andar loop ho sakta hai.

8. Loop ko hum ek function ke andar rakh sakte hain aur function ko loop ke andar call kar sakte hain.


*/
