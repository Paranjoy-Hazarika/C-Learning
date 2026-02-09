#include <stdio.h>

int main() {
    int c;

    c = getchar();

    int a, b;

    a = getchar();
    b = getchar();

    int d = b - a;
    putchar(d);
    printf("\n%d - %d = %d\n", b, a, d);

    printf("getchar() != EOF = %d\n", (c != EOF));

    printf("Character val: %c\n", c);
    printf("ASCII val: %d\n", c);

    printf("\n%d\n", EOF);

    if (c >= 'A' && c <= 'Z') {
        putchar(c);
    }
    printf("\n");

    c++;
    if (c != EOF) {
        putchar(c);
    }

    int num1 = '7';
    int num2 = num1 - '0';

    printf("\n");
    printf("%d - %d = %d", num1, (num1 - num2), num2);

    return 0;
}
