#include <stdio.h>

int main(void) {
    int n;

    printf("Enter a natural number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int count = 0;
    for (int j = 1; j <= n; j++) {
        if (n % j == 0) {
            count++;
        }
    }
    printf("Number of factors: %d\n", count);
    return 0;
}
