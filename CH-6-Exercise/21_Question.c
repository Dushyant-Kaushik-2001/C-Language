// Ques.21.Write a program which takes the month number as an input and display number of days in that month.

#include <stdio.h>
#include <conio.h>
int main()
{
    int month;

    printf("Enter the number of Month (1-12): ");
    scanf("%d", &month);

  
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        printf("Is month mein 31 din hote hain.");
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf("Is month mein 30 din hote hain.");
    }
    else if (month == 2)
    {
        printf("Is month mein 28 ya 29 din hote hain (Leap year ke hisaab se).");
    }
    else
    {
        printf("Invalid month number. Kripya 1 se 12 tak ka month number daalein.");
    }

    getch();
}


/*
Decision Control Statements:
if-else if-else statements ka use kiya gaya hai:
Agar month number 1, 3, 5, 7, 8, 10, ya 12 hai, toh month mein 31 din honge.
Agar month number 4, 6, 9, ya 11 hai, toh month mein 30 din honge.
Agar month number 2 hai, toh 28 ya 29 din honge (Leap year ke hisaab se).
Agar month number invalid ho (1 se 12 ke beech nahi hai), toh error message dikhaya jaata hai.
*/