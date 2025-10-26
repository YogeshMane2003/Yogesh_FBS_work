#include <stdio.h>

void perfect(int,int,int,int);

void perfect(int n,int i,int sum,int j){
    
    
    for(i = 1; i <= n; i++){
        j = 1;
        sum = 0;

    while (j < i) {
        if (i % j == 0) {
            sum = sum + j;
              
        }
        j++;
    }

     if (sum == i){
        printf("%d\n", i);
     }
      
    }
}

void main() {
    int n;  
    int i = 1, sum;
    int j;
    printf("Enter the number : ");
    scanf("%d",&n);
    perfect(n,i,sum,j);
}
