#include <stdio.h>

#define CUBE(x) ((x) * (x) * (x))

int main(void) {
    int n;
    scanf("%d", &n);

    printf("%d cubed is %d", n, CUBE(n));

    return 0;
}
