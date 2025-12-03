//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include<stdio.h>
int main()
{
    int n1,n2;
    char op;
    printf("Enter the numbers:");
    scanf("%d%d",&n1,&n2);
    printf("enter the operator:");
    scanf(" %c",&op);
    switch (op)
    {
    case '+':
        printf("%d", n1 + n2 );
        break;
    case '-':
        printf("%d",n1-n2);
        break;
    case '*':
        printf("%d",n1*n2);
        break;
    case '/':
        printf("%d",n1/n2);
        break;
    case '%':
        printf("%d",n1%n2);
        break;
    default:
        break;
    }
    return 0;
}