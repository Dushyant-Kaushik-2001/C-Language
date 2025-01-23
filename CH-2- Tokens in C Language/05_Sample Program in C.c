#include <stdio.h>

int main() {
    printf("Hello, World!");
    return 0;
}

/*
-------------------------------------------------------Line-by-Line Explanation:--------------------------------------------------------------

1. #include <stdio.h>

(a). Ye ek preprocessor directive hai, jo stdio.h (Standard Input/Output) library ko include karta hai.
(b). Is library mein input/output ke liye functions hote hain, jaise:
printf (output ke liye)
scanf (input ke liye)
(c). Agar hum yeh line nahi likhenge, toh printf() function kaam nahi karega.

2. int main()

(a). main() function har C program ka entry point hota hai.
(b). Jab program run hota hai, toh sabse pehle main() function execute hota hai.
(c). int specify karta hai ki main() function integer value return karega.
(d). Generally, return 0; use kiya jata hai success indicate karne ke liye.

3. {

(a). Ye ek opening curly brace hai, jo main() function ke body ki starting ko define karta hai.
(b). Jo bhi statements curly braces {} ke andar likhe jayenge, woh main() function ke under execute honge.

4. printf("Hello, World!\n");

(a). printf() ek function hai jo screen par output print karne ke liye use hota hai.
(b). "Hello, World!" ek string hai jo screen par print hogi.

5. return 0;

(a). return statement program ko terminate karta hai aur ek value return karta hai.
(b). 0 ka matlab hota hai ki program successfully execute ho gaya.
(c). Agar program mein koi error hota, toh yahan non-zero value return ki jati.

6. }

(a). Ye closing curly brace hai, jo main() function ke body ko end karta hai.
(b). Iske baad program ka execution khatam ho jata hai.


-------------------------------------------------------Program Execution Flow:---------------------------------------------------------------

1. #include <stdio.h>:
Library include hoti hai jo input/output functions provide karti hai.

2. int main():
Program execution yahan se start hoti hai.

3. printf():
String "Hello, World!" ko screen par print karta hai.

4. return 0;:
Program successfully terminate hota hai aur 0 return karta hai.


---------------------------------------------------------Points to Remember:------------------------------------------------------------------

1. #include <stdio.h> ke bina printf() kaam nahi karega.

2. Curly braces ({}) ka use zaroori hai function ke body ko define karne ke liye.

3. return 0; ka matlab hota hai program ne bina kisi error ke run complete kar liya.


*/