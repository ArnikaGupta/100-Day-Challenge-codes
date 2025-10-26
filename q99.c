//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    int day, month, year;
    char monthStr[4];

    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    sscanf(date, "%d/%d/%d", &day, &month, &year);

    if (month >= 1 && month <= 12) {
        strcpy(monthStr, months[month - 1]);
    } else {
        printf("Invalid month!\n");
        return 1;
    }

    printf("Formatted date: %02d-%s-%04d\n", day, monthStr, year);

    return 0;
}
