/*
----------------------------------------------------Keyword Continue---------------------------------------------

1. The keyword continue is used only in the body of loop. 
2. It is used to move control at termination condition in the case of while and do-while loop.  
3. continue is used in for loop to transfer control at flow part. 

#include<stdio.h>
int main()
{
  int x;                           
  while(1)                       
  {
     printf("Enter an even number");
     scanf("%d",&x);
     if(x%2==1)
          continue;
    else
     {
         printf("This is the correct value");
         break;
     }
                                
   }
   return 0;
}

1. In the above program, condition of while loop is always evaluated as TRUE. 
Any non-zero number is considered as TRUE and zero is considered as FALSE. 
2. The loop only ends at the execution of break. 
3. If the user enters an odd number condition x%2==1 becomes TRUE, then continue works. 
4. Continue transfers the control at while(1). 
5. As long as user keeps on entering odd numbers, continue works, but once the user enters an 
even number, break will terminate loop.

REMEMBER:
We can have loop inside a loop, it is called nested loop. 
For example:
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

1.In the above example printf(“i=%d j=%d “,I,j); will execute 12 times. Do dry run to understand its execution. 
When i is 1, inner loop will run for 3 times and prints  i=1 j=1 i=1 j=2  i=1 j=3 then printf(“\n”) moves the 
cursor to the next line. Control goes back to the outer for loop and increment value of i. 
This keeps on repeating for 4 times.
2. We can leave parenthesis of for loop blank (two semicolons must be there), it is considered as infinite loop.  
3. We cannot leave parenthesis of while empty. 





























































































*/
