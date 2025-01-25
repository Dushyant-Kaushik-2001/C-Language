#include <stdio.h>
int main()
{
    int x = 3, y;           
    y = x++;               
    printf("%d %d", x, y); 
    return 0;   
}           



/*
Explaination:

1. Sabse phle jab humne phli line ko padha to hume pta chla ki ismein do variable hain phla x aur doosra y.
toh copy mein humne do memory block bna liye ek x aur doosra y and then x mein assign kar diya 3.

2. Now, humne doosri line read kri aur dekha ki ismein do operators hain. 
one is assignment operator and second is post increment operator. 
toh ismein phle kon sa operator chalega?
Ans is assignment operator then post increment operator.
But why? kyunki post increment ki priority hai sabse kam isliye phle chlega assignment operator. 
toh y = x 
x ki value hai 3 jo ki y mein ho jaayegi copy toh y = 3.

3. Now, ab chalega post increment toh post increment kis par lga hua hai yani operand kon hai iska x 
toh x ki value ko 1 se increase krega toh x ki value ho jaayegi 4 yaani x = 4.

Output:

1. Initially x contains 3.  
2. In the expression y=x++; post increment has low priority than assignment operator, thus value of x is copied to y. 
3. Now x and y both contains 3. 
4. Increment operator works on x. Value of x becomes 4. 
5. Final value of x is 4 and y is 3, so the output is 4 3. 

*/