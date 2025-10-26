#include <stdio.h>

void upperCase(char);

void upperCase(char ch){


    if (ch >= 'A' && ch <= 'Z') {
         printf("The character is UPPERCASE.\n");
    } 
    else {
        printf("The character is LOWERCASE.\n");
    }
}


void main() {
    char ch = 'V';
    upperCase(ch);
}
