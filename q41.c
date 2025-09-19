//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    lastDigit = num % 10;

    int temp = num;
    digits = 0;
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    firstDigit = temp;

    if (digits == 0) {
        printf("Swapped number: %d\n", num);
        return 0;
    }

    int middlePart = (num % (int)pow(10, digits)) / 10;

    swappedNum = lastDigit * (int)pow(10, digits) + middlePart * 10 + firstDigit;

    printf("Swapped number: %d\n", swappedNum);

    return 0;
}
