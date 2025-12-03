//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("enter a  number.\n");
        return 0;
    }
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    if (sum == number)
        printf("%d is a perfect number.\n", number);
    else
        printf("%d is not a perfect number.\n", number);

    return 0;
}

