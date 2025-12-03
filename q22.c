//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include<stdio.h>
int main()
{
    float cp,sp,p,l;
    printf("Enter the cost price and selling price:");
    scanf("%f%f",&cp,&sp);
    if(sp>cp)
    {
        p=((sp-cp)/cp)*100;
        printf("profit %.2f%% ",p);
    }
    else if(cp>sp)
    {
        l=((cp-sp)/cp)*100;
        printf("loss %.2f%%",l);
    }
    else
    {
        printf("no profit or loss");
    }
    return 0;
}