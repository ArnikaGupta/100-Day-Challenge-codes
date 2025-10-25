//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include<stdio.h>
int main(){
    int countvow=0,countcons=0;
    char name[]="Hello";
    for(int i=0;name[i]!='\0';i++){
        if(name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U'||name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'){
            countvow+=1;
        }
        else{
            countcons+=1;
        }
    }
    printf("The number of vowels in the string is:%d\n",countvow);
    printf("The number of consonants in the string is:%d",countcons);

    return 0;
}