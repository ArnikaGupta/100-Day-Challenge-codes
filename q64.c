//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    int num, d, count[5]; 
    int i, mxcount = 0,highestcount;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    while (num > 0) {
        d = num % 10;      
        count[d]++;        
        num = num / 10;        
    }

    for (i = 0; i < 5; i++) {
        if (count[i] > mxcount) {
            mxcount = count[i];
            highestcount=i;
        }
    }

    printf("The digit with highest count is: %d\n",highestcount );

    return 0;
}
