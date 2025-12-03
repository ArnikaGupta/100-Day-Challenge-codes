/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=n-i;j>=1;j--){
            printf(" ");
        }
        for(int k=i;k>=1;k--){
        printf("*");
        }
        printf("\n");    
    }
    return 0;
}