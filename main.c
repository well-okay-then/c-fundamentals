#include <stdio.h>
#include <string.h>

int main(void) {
    char buf[100];
    fgets(buf, sizeof buf, stdin);

    /* TODO: fgets kept the newline it stopped on. If buf still ends with
       one, overwrite that character with '\0' so strlen stops before it. */
    int len = 0;
    while (len < 100 && buf[len] != '\n'){
        len++;
    }
    if (len < 100) {
        buf[len] = '\0';
    }

    printf("%zu\n", strlen(buf));
    return 0;
}
