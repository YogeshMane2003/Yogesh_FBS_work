#include <stdio.h>

void hrs(int,int,int);

void hrs(int a,int b,int c){
    


    b = a / 60;        
    c = a % 60;    

    printf("%d hours and %d minutes\n", b, c);
}

void main() {
    int minutes = 135;
    int hours, remaining;
    hrs(minutes,hours,remaining);
}


