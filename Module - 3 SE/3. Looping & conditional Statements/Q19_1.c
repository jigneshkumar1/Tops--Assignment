//19.1  Patterns: 


#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            if (j % 2 == 0)
                printf("0 ");
            else
                printf("1 ");
        }
        printf("\n");
    }

    return 0;
}

