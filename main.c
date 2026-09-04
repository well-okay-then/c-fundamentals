#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int total = 0;
    for (int i = 1; i <= n; ++i) {
        total += i;
    }
    printf("%d", total);
    // Loop and sum, then print.
    return 0;
}
