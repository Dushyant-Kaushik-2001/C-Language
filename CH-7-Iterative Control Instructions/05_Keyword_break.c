/*
-------------------------------------------Keyword break--------------------------------------------------------

1. break is a keyword 
2. It can only be used either in the body of loop or in the body of switch. 
3. The keyword break is used in the body of loop to terminate execution of loop before completion of its normal 
life. 
4. Sometimes it is desired to terminate loop before its normal end. 
5. For example we have to make a program to take input a number from user, which should be an even number. 
We give at the most three chances to the user to input correct value. It is like a game where user has three 
chances. If user entered an even number the game is in his pocket (win the game) otherwise he loses the game.  
Suppose user inputs an even number in the first chance, then no more chances are needed as he already wins the 
game. So we have to use break keyword to terminate the iterations. 

#include<stdio.h>
int main()
{
  int x,i=1;                           
  while(i<=3)                       
  {
     printf("Enter an even number");
     scanf("%d",&x);
     if(x%2==0)
     {
         printf("You Win");
     break;
     }
     i++;                           
  }
     if(i==4)
         printf("You Lost");
return 0;
}

1. Dry run above program. As soon as break keyword encounters, control immediately comes out of the loop body.  
2. We put break keyword inside if statement because we want to make it happen only when user input is divisible 
by 2. 
3. We cannot use break outside the loop body. 
4. We will see more about keyword break in switch case control instruction in the next chapter.



























































*/