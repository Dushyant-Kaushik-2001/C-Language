/*
-----------------------------------------------------------White Space------------------------------------------------------------------------

White space ka matlab hai un characters ka use jo visible nahi hote lekin code ko logically separate karne ke liye zaroori hote hain. 
Yeh C programming mein syntax ko define karne aur code ko readable banane ke liye kaafi important hote hain.

White Space Characters in C:

1. Space ( ):
Yeh normal blank space hota hai jo words ko separate karne ke liye use hota hai.
Example:
int a = 10;

2. Tab (\t):
Yeh ek tab space hota hai jo indentation ke liye use hota hai.
Example:
int main() 
{
    printf("Hello World!");
}

3. Newline (\n):
Yeh line break dene ke liye use hota hai, jo ek line ko doosri line se separate karta hai.
Example:
int main() 
{
    printf("Hello World!\n");
}

4. Carriage Return (\r):
Yeh bhi ek line break character hai, lekin yeh purani line ko replace karne ke liye hota hai. 
Yeh zyada tar legacy systems mein use hota hai.
Example:
printf("Hello World!\rOverwritten");

5. Form Feed (\f):
Yeh bhi ek type ka line break character hai, lekin yeh zyada use nahi hota. 
Older printing systems mein isse page break dene ke liye use kiya jata tha.


----------------------------------------------------Role of White Space in C------------------------------------------------------------------

1. Code Readability:
White space ka use code ko readable aur structured banane ke liye hota hai. 
Jaise, aap spaces aur tabs ka use karke code ko indented (tabbed) karte ho taaki program easily samajh aaye.

2. Separating Tokens:
White space ka use tokens ko separate karne ke liye hota hai. 
Jaise variables, operators, aur keywords ko differentiate karne ke liye spaces aur tabs use kiye jate hain.

3. Ignored by Compiler:
White space characters ko compiler ignore karta hai. 
Matlab, code execution par koi effect nahi hota. Sirf readability aur structure ko improve karta hai.

4. For Preprocessor Directives:
White spaces ko preprocessor directives ke saath bhi use kiya jata hai, jaise #include, #define mein space zaroori hoti hai.


----------------------------------------------Important Points about White Space in C------------------------------------------------------

1. More than one space doesn't matter:
C mein aap ek ya zyada spaces de sakte ho. Multiple spaces ek token ko alag nahi karte, compiler har extra space ko ignore kar deta hai.

2. White space ko terms mein distinguish karte hain:
Space, tab, aur newline ko alag-alag treat kiya jata hai jab token ko parse kiya jata hai. 
Lekin inka overall role code ko separate karna hi hota hai.

3. Indentation aur Formatting:
Code ko properly indent karna best practice hai, lekin yeh strictly required nahi hota. 
Compiler ko white space ki zarurat sirf token separation ke liye hoti hai.


Summary:
1. White space ek important part hai C programming ka, jo code ko readable aur structured banata hai.
2. Compiler white space ko ignore karta hai, but yeh tokens ko separate karne aur program ko samajhne mein madad karta hai.
3. Space, tab, aur newlines common white space characters hain.

*/