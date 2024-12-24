/*

Ques.9. Can we assign a character constant in an int variable?

Ans. Yes, We can assign a character constant to an int variable in C or C++.

In C and C++, characters are typically stored as integer values, specifically using their ASCII (or Unicode) values. 
For example, the character 'A' has an integer value of 65 in ASCII. 
So, when we assign a character constant to an int variable, it gets converted to its corresponding integer value.
Here’s an example:

*/

#include <stdio.h>

int main() {
    int x = 'A';                                             // 'A' is implicitly converted to its ASCII value, which is 65
    printf("The integer value of 'A' is: %d", x);
    return 0;
}

/*

In this case, the integer value of 'A' (which is 65) will be stored in the int variable x. If we print the value of x, it will output 65.
Thus,we can treat characters as integers when assigned to an int variable, and this is a common practice in many programming tasks.

*/

