#include <stdio.h>

int main() {
    int a = 33;
    // putchar(a);
    
    while (a < 127) {
        // putchar(a);
        printf("{%c - %d}", a, a);
        if (a < 126) printf("\n");
        a++;
    }

    return 0;
}