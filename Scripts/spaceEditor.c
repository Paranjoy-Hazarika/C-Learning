#include <stdio.h>
#include <stdbool.h>

void spaceFormatByBool() {
    int c;  //* An int variable to store the character typed
    bool prev_space = false;    //* A bool variable to check states

    while ((c = getchar()) != EOF) {
        if (c == ' ') {     //* If the current character typed is space then move to this code block
            if (!prev_space) {      //* If the previous character than was printed was not a space, then move to then print the current space that was pressed and turn the state of previous space to true - cause for the next iteration - the previous character would be true
                putchar(c);
                prev_space = true;
            }
        } else {        //* If the character pressed now is not a space - then we can print the current character which won't be a space - so we can make the previous space to be false
            putchar(c);
            prev_space = false;
        }
    }
}


void spaceFormatByCounter() {
    int c;  //* An int variable to store the character typed
    int space = 0;      //* An integer space counter - that counts the number of spaces printed - to control the number of spaces allowed

    while ((c = getchar()) != EOF) {
        if (c == ' ') {     //* While condition to check if the character pressed is space - if yes - then execute its code block
            space++;    //* Increment the space counter by 1 to indicate that one space was printed
            if (space > 1) {    //* Now if space printed is more than 1 than we just skip the entire iteration
                continue;
            } else {    //* Else we can print that space
                putchar(c);
            }
        } else {    //* This is the else block for the condition that if the character typed is a space - If its not - then just print the character and reset the space counter back to 0;
            putchar(c);
            space = 0;
        }
    }
}

int main() {
    int choice;

    printf("Choose method: \n1. Boolean \n2. Counter\n");
    printf("Enter your choice: ");
    
    scanf("%d", &choice);
    getchar();      //* This getchar() function is to clear the input buffer - from typing the choice - the number gets registered in the choice variable but the Enter (\n) we press just stays there until we clear it. 

    printf("Start typing >(Ctrl + Z to quit)\n");

    switch (choice) {
        case 1:
            spaceFormatByBool();
            break;
        
        case 2:
            spaceFormatByCounter();
            break;

        default:
            printf("Invalid Input");
            break;
    }
    
    return 0;
}


