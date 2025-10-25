//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main() {
    int matrix[10][10];
    int n, i, j, sum = 0;

    printf("Enter size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("\nSum of main diagonal elements = %d\n", sum);

    return 0;
}

