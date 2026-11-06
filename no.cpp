#include <stdio.h>

int main() {
    int i, j;

    // Loop for rows
    for (i = 4; i >= 1; i--) {
        // Loop for columns (reverse order)
        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n"); 
    }

    return 0;
}

