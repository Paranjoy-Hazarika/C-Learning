#include <stdio.h>

int main() {
    int nc = 0;
    int i = 1;
    int c;

    printf("Start writing the lines > (Ctrl + Z to quit)\n");
    printf("%d. ", i); //* The print of the first line is written he cause the first line number wont be printed if we dont put one here - its cause the first getchar() is called inside the while condition - only after executing this does it move to the print of line number inside the if statement.

    while ((c = getchar()) != EOF) {
        // printf("%d. ", i); //* If the print is put here then it would increment every time a character is written.

        if (c == '\n') {
            ++nc;
            // i++; //? Either pre or post increment can be used.
            ++i;
            printf("%d. ", i); //* The print of i is put inside the if condition so that it increments i only when a new line is made - and not everytime a character is written.
        }
    }

    if (nc < 1) {
        printf("You haven't written anything\n");
    } else {
        printf("No. of Lines: %d", nc);
    }
    
    return 0;
}