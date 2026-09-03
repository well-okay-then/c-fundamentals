#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    /* Print exactly one line:
         n divisible by 15 -> FizzBuzz
         n divisible by 3  -> Fizz
         n divisible by 5  -> Buzz
         anything else     -> n itself

       TODO: write the if / else if / else chain. All four cases. */

    if (n % 15 == 0) {
        printf("FizzBuzz");
    } else if (n % 3 == 0) {
        printf("Fizz");
    } else if (n % 5 == 0) {
        printf("Buzz");
    } else {
        printf("%d", n);
    }

    return 0;
}
