//Ques.27. Write a program to count digits in a given number. 

#include <stdio.h>
#include <conio.h>
int main()
{
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    printf("The number of digits in the given number is: %d", count);
    getch();
}
