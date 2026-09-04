#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int* nums = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

    int total = 0;
    for (int i = 0; i < n; ++i) total += nums[i];
    printf("%d", total);
    free(nums);
    // Sum, print, then free.
    return 0;
}
