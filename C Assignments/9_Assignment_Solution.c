#include<stdio.h>
//Ques.1.Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
int main()
{
    float cp,sp,p;
    printf("Enter cost price and selling price: ");
    scanf("%f%f",&cp,&sp);
    if(cp<=sp)                                    //Agar Selling Price (SP) zyada hai ya barabar hai Cost Price (CP) ke, toh profit hoga.
    {
        p=(sp-cp)/cp*100;
        printf("Profit percentage is %0.2f%%",p);      // %% → Ek % print karne ke liye double %% likhna padta hai.
    }
    else
    {
        p=(cp-sp)/cp*100;                            // Agar Selling Price (SP) kam hai Cost Price (CP) se, toh loss hoga.
        printf("Loss percentage is %0.2f%%",p);
    }
    return 0;
}