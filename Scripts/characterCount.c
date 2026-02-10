#include <stdio.h>

int main() {
    int nc; //* Change the `int` type to `long` type - to handle longer lines

    printf("Start: \n");
    nc = 0;
    int d;

    while (((d = getchar()) != EOF) && (d != 10)) {
        ++nc;  //* using pre or post increment doesn't matter in this code - cause its not been used in any logic (++nc or nc++) does the same thing;
    }

    printf("%d\n", nc);

    nc = 0;
    char hello[] = "Hello, World";
    
    while (hello[nc] != '\0') nc++;
    
    printf("(%s) contains - %d\n",hello, nc);
    printf("Start writing the sentence: \n");

    int n = 0;
    int c;  //* Change the `int` type to `long` type - to handle longer lines
    while (((c = getchar()) != EOF) && (c != '\n')) {
        if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z'))) {
            n++;
        }
    }

    printf("Length: %d\n", n);

    int a = 1;
    int b = 1;
    printf("a with pre-increment: %d (%d)\n", ++a, a);
    printf("b with pre-increment: %d (%d)\n", b++, b);

    int x = 0;

    printf("Unexpected Behaviour: %d - %d - %d\n", x, x++, ++x);
    printf("Value of X: %d\n", x);
    printf("Value of X: %d\n", x++);
    printf("Value of X: %d\n", ++x);

    //* NOTE: NEVER MODIFY AND USE THE SAME VARIABLE IN THE SAME STATEMENT - C HAS NO ORDER OF EVALUATION IN PRINTF - SO IT WOULD EVALUATE IN ANY ORDER - GIVING DIFFERENCE IN READINGS

    //* Single line `for` block
    int j;
    for (j = 0; j < 10; ++j)
    ;
    printf("%d\n", j);   

    return 0;
}
