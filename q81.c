//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include<stdio.h>
int main(){
    int count=0;
    char name[]="Arnika";
    for(int i=0;name[i]!='\0';i++){
        count=count+1;
    }
    printf("the number of characters in string is:%d",count);

    return 0;
}