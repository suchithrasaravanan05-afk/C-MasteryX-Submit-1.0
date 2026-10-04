#include <stdio.h>

int main() {
    int rows = 4; 

    for (int i = rows; i >= 1; i--) {
        for (int j = 0; j < rows - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 2; i <= rows; i++) {
        for (int j = 0; j < rows - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
