//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>

int isVowel(char ch) {
    
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        return 1;
    return 0;
}

void removeVowels(char str[]) {
    int i = 0, j = 0;

    while (str[i] != '\0') {
        if (!isVowel(str[i])) {
            str[j] = str[i];  
            j++;
        }
        i++;
    }

    str[j] = '\0';  
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

    removeVowels(str);

    printf("String after removing vowels: %s\n", str);

    return 0;
}
