#include<stdio.h>

int main()
{
    int l,b;
    printf("Enter the length and breadth:");
    scanf("%d%d",&l,&b);
    int area=l*b;
    int per=2*(l+b);
    printf("The area of the rectangle is:%d\n",area);
    printf("The perimeter of the rectangle is:%d\n",per);
    return 0;
}