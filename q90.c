//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include <stdio.h>

void toggleCase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;   
        } 
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;   
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

    toggleCase(str);

    printf("Toggled string: %s\n", str);

    return 0;
}
