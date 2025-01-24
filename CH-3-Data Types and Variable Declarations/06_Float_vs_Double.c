/*
---------------------------------------------------------------Float VS Double----------------------------------------------------------------

Float - 4 bytes
double - 8 bytes

Suppose humne ek number liya 0.7 
Agr hum iska binary krein kyunki actual mein data jo store hoga vo binary mein hi store hoga toh 0.7 ka binary kya hoga 
0.7 * 2 = 1.4              1            toh hum point ke phle ki value le lenge that is 1 to bachega 0.4
0.4 * 2 = 0.8              0
0.8 * 2 = 1.6              1
0.6 * 2 = 1.2              1
0.2 * 2 = 0.4              0
0.4 * 2 = 0.8              0
0.8 * 2 = 1.6              1

0.7 = 0.101100110011..........
Now,
suppose humne ek float type ka variable liya
float x = 0.7;
Ab actual mein float type ka variable to 4 bytes ka hi hai to iske andar ye pura number store ho sakta hai kya?
Nahi ho sakta kyunki 0.7 ka jo binary hai uski length hai infinite itni bdi value kisi bhi finite length mein kese store hogi?
Toh majbori mein hum ek limit tak 0,1 lenge uske baad ke 0,1 ko chor denge .

Ab Agr maine double type ka variable bnaya to kahani to same hai lekin y variable 8 bytes ka hai
double y = 0.7;
8 bytes ka hone ki wajah se hum jyada 0,1 y mein store kar paayenge 

Accurately toh 0.7 na x mein store ho sakta hai na y mein store ho sakta hai lekin comparetively x ki tulna mein y mein double 
accuracy hai isiliye usko double bolte hain.

**NOTE = Float hota hai single precision , precision matlab accuracy Aur double hota hai double precesion
This is the major difference between float and double.


*/