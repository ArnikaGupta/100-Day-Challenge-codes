//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>

int isPalindrome(char str[]) {
    int start = 0;
    int end = 0;

    
    while (str[end] != '\0') {
        end++;
    }
    end--; 

    
    while (start < end) {
        if (str[start] != str[end]) {
            return 0;  
        }
        start++;
        end--;
    }

    return 1;  
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    if (isPalindrome(str))
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}
