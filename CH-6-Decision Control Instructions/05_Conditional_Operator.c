/*
-----------------------------------------------------Conditional Operator(?:)----------------------------------------------------------------- 

1. It is also known as ternary operator

2. Conditional operator is the only operator in C language which requires three operands, hence known as ternary operator.

3. Following is the syntax of conditional operator:

        Expression1 ? expression2 : expression3;

4. Expression 1 is condition, evaluated as true or false. 
When expression 1 is true expression 2 is selected otherwise expression 3 is selected.
Jo Phle Section mein expression likhenge vo always ek condition maani jaati hai.

5. Conditional operator mein hume if else likhne ki jaruarat nhi hai. Hum sidhi condition likhenge condition ke baad question mark 
lgaayenge phir jo hum if block mein likh rhe the use hum question mark ke baad likhenge semicolon hta ke colon lgaayenge aur jo else 
block mein likh rhe the usko hum uske aaghe yani teesri jagah p likh denge ye vhi kaam krega jo if else krenge.

6. Using conditional operator we can perform the same job which we could do with the help of if-else statement. 

7. We can easily transform if-else statement into conditional operator:

    (a)if’s condition is expression 1 in conditional operator 
    (b)if block’s code is expression 2 in conditional operator 
    (c)else block’s code is expression 3 in conditional operator 

8. Occasionally, we want to write more than one statement in expression 2 or expression 3, in that case use comma to separate statements. 
For example:
          x>y ? printf("A"),printf("B") : printf("C"),printf("D");

9. Conditional operator provides an ease of writing selective assignment. 
For example we want to assign max value between two data, to a variable:
           max = x>y ? x : y;

10. We can use another conditional operator in a conditional operator as an expression2 or expression3. This is again called nesting.


Example 1 : Write a program to check whether a number is positive or not.

include <stdio.h>
int main()
{ 
    int x;
    printf("Enter a Number:");
    scanf("%d",&x);
    x>0 ?  printf("Positive") : printf("Non Positive");            // printf(x>0 ?"Positive" :"Non Positive"); ise ase bhi likh sakte hain
return 0;
}

Output:
Enter a Number:34
Positive 


Example 2 : Write a program to find greater between two numbers.

include <stdio.h>
int main()
{ 
    int x,y;
    printf("Enter two Numbers:");
    scanf("%d%d", &x, &y);
    x>y ? printf("%d is greater",x) : printf("%d is greater",y);
    return 0;
}
Output:
Enter two Numbers:45
33
45 is greater

 
NOTE = Conditional Operator ka ek aur usage hai selective assignment Let see:

Example 3 : Write a program to find greater between two numbers.

include <stdio.h>
int main()
{ 
    int x,y,max;
    printf("Enter two Numbers:");
    scanf("%d%d", &x, &y);

    max = x>y ? x:y ;
    printf("Greater number is %d",max);
return 0;
}

Output:
Enter two Numbers:4 3
Greater number is 4


 

*/