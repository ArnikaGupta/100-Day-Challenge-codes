//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { 
        int odd=2*i-1;
        sum+=odd;
    }
    printf("sum of odd numbers :%d",sum);
    return 0;
}