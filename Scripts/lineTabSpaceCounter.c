#include <stdio.h>

int main() {
    int spaces, lines, tabs, chars;
    int c;
    int i = 1;

    spaces = lines = tabs = chars = 0;

    printf("Start typing >\n%d. ", i);
    while ((c = getchar()) != EOF) {
        if (c == '\n') {    //* When comparing the characters - use single quote [''] rather than double quote [""] - as double quote is used for strings i.e. an array of characters
            i++;
            lines++;
            printf("%d. ", i);  //* Print line number after incrementing it first and only if a new line is truly created.
        } else if (c == '\t') {
            tabs++;
        } else if (c == ' ') {
            spaces++;
        } else if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z'))) {  //* Single line comparison to check whether the typed character is truly an alphabet.
            chars++;
        }
    }

    printf("RESULT: \nLines: %d \nSpaces: %d \nTabs: %d\nCharacters: %d\n", lines, spaces, tabs, chars);

    return 0;
}