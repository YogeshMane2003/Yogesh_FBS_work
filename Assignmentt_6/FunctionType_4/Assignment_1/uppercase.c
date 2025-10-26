#include <stdio.h>

int upperCase(char x);

int upperCase(char x){


    if (x >= 'A' && x <= 'Z') {
        return 1;
    } 
    else {
        return 0;
    }
}


void main() {
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);

    int res = upperCase(ch);
    if(res == 1)
        printf("The character is UPPERCASE.\n");
    else
        printf("The character is LOWERCASE.\n");
}