#include <stdio.h>

int main(void) {
    int a = 9, b = 4;
    printf("9 / 4 (int) = %d\n", a / b);            // 2
    printf("9.0 / 4 (float) = %.2f\n", 9.0 / b);    // 2.25
    printf("(float)9 / 4 = %.2f\n", (float)a / b); // 2.25
    return 0;
}
