#include <stdio.h>

void firstLast(int,int,int,int);

void firstLast(int n,int first,int last,int sum){
    

    last = n % 10;  

    while (n >= 10) {
        n = n / 10;  
    }
    
    first = n;

    sum = first + last;
    printf("Sum is %d", sum);
}

void main() {
    int n = 12345;  
    int first, last, sum;
    firstLast(n,first,last,sum);
}
