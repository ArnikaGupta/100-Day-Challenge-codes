//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[200];
    int i, len;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    len = strlen(name);

    int lastStart = len - 1;
    while (lastStart >= 0 && name[lastStart] != ' ') {
        lastStart--;
    }
    lastStart++; 

    
    if (isalpha(name[0])) {
        printf("%c.", toupper(name[0]));
    }

    for (i = 1; i < lastStart; i++) {
        if (name[i] == ' ' && isalpha(name[i + 1])) {
            printf("%c.", toupper(name[i + 1]));
        }
    }

    
    printf(" %s\n", &name[lastStart]);

    return 0;
}
