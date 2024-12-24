/*
------------------------------------------------for loop----------------------------------------------------------

Following is the syntax of for loop:
...
for(initialization; condition; flow)
{

       statement1;
       statement2;
       ...
}
...

1. for is a keyword 
2. The most appealing feature of for loop is its format which is capable to provide place three basic logical 
constructs to control looping, initialization, condition and flow at one place. 
3. In the for’s parenthesis, exactly two semicolons are mandatory. 
4. Whatever written before the first semicolon is executed first, then control moves to condition part, 
which is written between the semicolons. Condition is evaluated as true or false. 
If it is false, control simply skipped for’s block. 
If the condition is true control enters into the for’s block. 
After executing statements residing in the for’s block, control jumps up to the flow section, 
which is written after the second semicolon in the parenthesis. 
Control again moves to the condition part and process repeats. 
5. The for loop is also an entry control loop.

EXAMPLE:
Following is the same program of printing mysirg five times on the screen but with the for loop.

#include<stdio.h>
int main()
{
  int i=1;                            // Initialization
  for(i=1;i<=5;i++)                  // Flow  // condition        
  {
     printf("mysirg\n");
  }                      

return 0;
}

1. Dry run the above code according to the rules just described. 
2. We can remove curly braces of for’s body, as it contains only one statement. 




























































*/