#include <stdio.h>

int firstLast();

int firstLast(){
    int n;  
    int first, last, sum;
    printf("Enter the number: ");
    scanf("%d",&n);

    last = n % 10;  

    while (n >= 10) {
        n = n / 10;  
    }
    
    first = n;

    sum = first + last;
    return sum;
}

void main() {
    int res = firstLast();
    printf("The sum of first digit and last digit is : %d",res);
}
