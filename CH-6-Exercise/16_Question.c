// Ques.16.Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.

#include <stdio.h>
#include <conio.h>
int main()
{
    float cp, sp, pl;

    printf("Enter the Cost price: ");
    scanf("%f", &cp);

    printf("Enter the Selling price: ");
    scanf("%f", &sp);

    
    if (sp > cp)
    {
        pl = ((sp - cp) / cp) * 100;
        printf("Profit: %.2f%%", pl);
    }
    else if (cp > sp)
    {
        pl = ((cp - sp) / cp) * 100;
        printf("Loss: %.2f%%", pl);
    }
    else
    {
        printf("No profit, no loss.");
    }

    getch();
}


/*
Explanation:

1. Input = User se cost_price aur selling_price input lete hain.

2. Condition check:

(a). Agar sp > cp = Profit hota hai.
Formula: ((SP - CP) / CP) * 100.

(b). Agar cp > sp = Loss hota hai.
Formula: ((CP - SP) / CP) * 100.

(c). Agar dono equal hote hain, toh "No profit, no loss".

3. Output = Profit ya loss percentage ko 2 decimal places tak print karega.



*/