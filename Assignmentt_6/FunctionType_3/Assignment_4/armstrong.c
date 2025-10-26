#include <stdio.h>

void armstrong(int,int,int,int,int);

void armstrong(int n,int i,int num,int sum,int rem){
    

    for (i = 1; i <= n; i++) {
        num = i;
        sum = 0;

        while (num > 0) {
            rem = num % 10;
            sum = sum + (rem * rem * rem); 
            num = num / 10;
        }

        if (sum == i)
            printf("%d ", i);
    }
}
void main() {
    int n = 380;  
    int i, num, sum, rem;
     armstrong(n,i,num,sum,rem);
}
