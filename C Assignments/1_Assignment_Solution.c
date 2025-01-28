#include <stdio.h>
int q1()
{
    printf("Hello Students");

    return 0;
}
int q2()
{
    printf("Hello\nStudents");
    return 0;
}
int q3()
{
    printf("\"MySirG\"");                                        // Double quotes ke liye backslash (\") use karte hain
    return 0;
}
int q4()
{
    printf("\\n");                                                // \n ko as text print karne ke liye \\ use karte hain
    return 0;                                                    //Pehla \ compiler ko batata hai ki "yeh ek escape character hai."
}                                                               //Dusra \ compiler ko batata hai ki "yeh ek text character hai."
int q5()  
{                                                                                               
    printf("\\r");
    return 0;
}
int q6()
{
    printf("\"Teacher's Day\"");                      // Double quotes ke liye backslash (\") use karte hain
    return 0;
}
int q7()
{
    int a, b, c;                                   // Yha teen variable kyu banaye kyunki do mein to variable rakhenge aur teesre mein sum
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);

     c = a + b;

    printf("Sum is %d", c);
    return 0;
}
int q8()
{
    int x, square;

    printf("Enter a number: ");
    scanf("%d", &x);

    square = x * x;

    printf("The square of %d is %d", x, square);

    return 0;
}
int q9()
{
    int l, b, area;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d%d", &l, &b);

    area = l * b;
    printf("Area of rectangle is %d",area);
    return 0;
}
int main()
{
    int r;
    float area;

    printf("Enter radius of circle: ");
    scanf("%d", &r);

    area = 3.14 * r * r;

    printf("Area of Circle is %f ", area);

    return 0;
}



/*
Ques.11.Write a C program to print \\ on the screen.

#include <stdio.h>

int main()
{
    printf("\\\\");                                         // Do backslashes print karne ke liye har ek ke liye \\ use hota hai
    return 0;
}

1. Ek backslash print karne ke liye humko do backslashes (\\) likhne hote hain.
2. Iska matlab hai, agar humko do backslashes print karne hain, toh humko 4 backslashes likhne padenge: \\\\.
3. Yeh do backslashes ek doosre ko cancel kar dete hain aur ek backslash print hota hai.
4. Isliye,
    - Agar humko ek backslash print karna hai, toh humko do backslashes likhne padenge.
    - Agar humko do backslashes print karne hain, toh humko chaar backslashes likhne padenge.
    - Agar humko teen backslashes print karne hain, toh humko 6 backslashes likhne padenge.
    

Ques.12.Write a C program to print %d on the screen

#include <stdio.h>

int main()
{
    printf("%%d");                 // phla % hai indicator jo ki doosro ka meaning change krega
    return 0;                      // doostra % vo hai jiska meaning change ho ra hai
}
                  

*/