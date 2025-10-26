#include <stdio.h>

void age(int);

void age(int a){
     

    if (age < 12) {
        printf("Child\n");
    }
    else if (age >= 12 && age <= 19) {
        printf("Teenager\n");
    }
    else if (age >= 20 && age <= 59) {
        printf("Adult\n");
    }
    else  {
        printf("Senior\n");
    }
}
void main() {
    int a = 13;
   age(a);
}
