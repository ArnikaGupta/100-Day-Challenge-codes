//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>

void replaceSpaces(char str[]) {
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i] = '-';   
        }
        i++;
    }
}

int main() {
    char str[200];

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

    replaceSpaces(str);

    printf("Modified string: %s\n", str);

    return 0;
}
