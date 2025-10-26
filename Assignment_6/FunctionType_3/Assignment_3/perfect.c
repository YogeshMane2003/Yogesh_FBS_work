#include <stdio.h>

void perfect(int,int,int);

void perfect(int n, int i,int sum){
    

    while (i < n) {
        if (n % i == 0) {
            sum = sum + i;
        }
        i++;
    }

    if (sum == n)
        printf("Perfect\n");
    else
        printf("Not Perfect");
}
void main() {
    int n = 28;  
    int i = 1, sum = 0;
   perfect(n,i,sum);

}
