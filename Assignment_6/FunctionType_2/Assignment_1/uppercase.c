#include <stdio.h>

int upperCase();

int upperCase(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if (ch >= 'A' && ch <= 'Z') {
        return 1;
    } 
    else {
        return 0;
    }
}


void main() {
    if(upperCase()){
     printf("The character is UPPERCASE.\n");
    }
    else{
     printf("The character is LOWERCASE.\n");
    }
}
