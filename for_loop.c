#include <stdio.h>

int main() {
    char str[] = "Hello, World!";

    printf("%s\n", str);

    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);

    return 0;
}
