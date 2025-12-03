//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include<stdio.h>
int main()
{
    int l1,l2,l3;;
    printf("Enter the lengths of the triangle:");
    scanf("%d%d%d",&l1,&l2,&l3);
    if(l1==l2 && l2==l3 && l1==l3)
    {
        printf("Equilateral");
    }
    else if(l1==l2 || l2==l3 || l1==l3 )
    {
        printf("Isosceles");
    }
    else
    {
        printf("Scaler");
    }
    return 0;
}