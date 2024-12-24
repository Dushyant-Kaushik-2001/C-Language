/*
----------------------------------------------------else if ladder--------------------------------------------------------------------------

1 .else if ladder is nothing but a special case of nesting where nesting only appears in else block.

2. Syntax:
if()
      Statement;
else if()
      Statement;
else if()
      Statement;
else if()
      Statement;
else
      Statement;


3. Only one block is selected for execution.

Following is the program:
*/
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your Marks:");
    scanf("%d", &marks);

    if (marks > 90)
        printf("Grade A");
    else if (marks > 80)
        printf("Grade B");
    else if (marks > 70)
        printf("Grade C");
    else 
        printf("Grade D");

    return 0;
}












