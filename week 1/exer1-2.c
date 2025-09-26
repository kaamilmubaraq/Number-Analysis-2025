#include <stdio.h>

int main(void) {
    int n;

    printf("Enter a natural number (<= 1000): ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Factors of %d:\n", n);

    int count = 0;
    for (int j = 1; j <= n; j++) {
        if (n % j == 0) {
            printf("%d", j);
            count++;

            if (count % 5 == 0) {
                printf("\n");
            } else {
                printf(" ");
            }
        }
    }
    return 0;
}
