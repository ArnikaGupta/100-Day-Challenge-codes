/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the numbers:");
    scanf("%d%d",&a,&b);
    int sum=a+b;
    int diff=a-b;
    int pr=a*b;
    int quo=a/b;
    printf("the sum of the numbers are:%d \n",sum );
    printf("The difference of the numbers are:%d\n",diff );
    printf("The product of the numebrs are:%d\n",pr );
    printf("The quotient of the numbers are:%d\n",quo );
    return 0;
}