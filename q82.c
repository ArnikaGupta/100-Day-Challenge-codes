//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include<stdio.h>
int main(){
    char name[]="Arnika";
    for(int i=0;name[i]!='\0';i++){
        printf("%c",name[i]);
        printf("\n");
    }

    return 0;
}