//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include<stdio.h>
int main()
{
    int n,d,sum=0,temp;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while (n>0)
    {
        d=n%10;
        sum=sum*10+d;
        n=n/10;
    }
    if (temp==sum)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    return 0;
}