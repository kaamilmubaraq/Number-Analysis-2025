// gosa-1.c
#include <stdio.h>
#include <math.h>

int main(void) {
    printf("%6s  %15s  %18s  %18s\n",
           "x", "sin(x) 真値", "第３項目までの値", "誤差（真値-実験値）");

    for (float x = 0.0f; x <= 3.0f; x += 0.5f) {
        // True value based on sin function
        float truev = sinf(x);

        // 3-term Taylor approimation of sin(x) around 0
        float x2 = x * x;
        float x3 = x2 * x;
        float x5 = x3 * x2;
        float approx = x - x3 / 6.0f + x5 / 120.0f;

        float err = truev - approx;

        printf("%6.1f  %10.6f  %15.6f  %15.6f\n", x, truev, approx, err);
    }
    return 0;
}
