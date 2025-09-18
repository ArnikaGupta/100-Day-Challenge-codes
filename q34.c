//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>

int main() {
    int number, i, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number <= 1) {
        printf("%d is not a prime number.\n", number);
        return 0;
    }
    for (i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);

    return 0;
}
