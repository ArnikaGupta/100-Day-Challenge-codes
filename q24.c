//Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
/*First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
#include<stdio.h>
int main()
{
    int unit,Eb;
    printf("Enter the units consumed:");
    scanf("%d",&unit);
    if(unit<=100)
    {
       Eb= 5*unit;
       printf("bill: ₹%d",Eb);
    }
    else if (unit<=200)
    {
        Eb=(5*100)+((unit-100)*7);
        printf("bill : ₹%d",Eb);
    }
    else if (unit<=300)
    {
        Eb=(5*100)+(7*100)+((unit-200)*10);
        printf("bill: ₹%d",Eb);
    }
    else
    {
        Eb=(5*100)+(7*100)+(10*100)+((unit-300)*12);
        printf("bill : ₹%d",Eb);
    }
    return 0;
}