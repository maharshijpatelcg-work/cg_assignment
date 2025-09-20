#include <stdio.h>

int main() {
    int n = 5;  // size of half diamond
    int i, j, space;

    // Upper half
    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars and spaces in between
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    // Lower half
    for (i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars and spaces in between
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}