#include<stdio.h>
int main()
{
int x = 3 , y;
y = ++x;
printf("%d %d", x , y);
return 0;
}


/*
Explaination:
1. Sabse phle jab humne phli line ko padha to hume pta chla ki ismein do variable hain phla x aur doosra y.
toh copy mein humne do memory block bna liye ek x aur doosra y and then x mein assign kar diya 3.

2. Now, humne doosri line read kri aur dekha ki ismein do operators hain. 
one is assignment operator and second is pre increment operator. 
toh ismein phle kon sa operator chalega?
Ans is pre increment operator and then assignment operator.
But why? kyunki pre increment ki priority hai sabse jyada isliye phle chlega pre increment operator. 
toh pre increment kis par lga hua hai yani operand kon hai iska x toh x ki value ko 1 se increase krega toh x ki value ho jaayegi 4 yaani x = 4.

3. Now, ab chalega asignment operator toh assignment kya krega assignment x ki value ko y mein copy kr dega. 
x ki value hai 4 jo ki y mein ho jaayegi copy toh y = 4.


Output:
1. Initially x contains 3.
2. In the expression y = ++x; pre increment has higher priority than assignment operator, thus value of x is incremented to 4.
3. Now x contains 4.
4. Value of x is copied to y, which is 4 at this moment.
5. Final value of x is 4 and y is 4, so the output is 4 4.


*/