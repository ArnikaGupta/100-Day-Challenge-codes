/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345

/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int k=n-i-1;k>=1;k--){
            printf(" ");
        }
        for(int j=n-i;j<=n;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}