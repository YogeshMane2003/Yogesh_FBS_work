#include<stdio.h>

void strong(int,int,int,int,int,int,int);

void strong(int n,int sum,int fact,int rem,int i,int j,int num){
    
    
    for(i = 1; i <= n; i++){
        num = i;
        sum = 0;

    while(num > 0){
        rem = num % 10;
        fact = 1;
        j = 1;

        while(j <= rem){
            fact = fact * j;
            j++;
        }
        sum = sum + fact;
        num = num/10;
    }

    if(sum == i){
        printf("%d\n", i);
    }
    }
}

void main(){
    int n = 150;
    int sum , fact, rem, i, j, num;
    strong(n,sum,fact,rem,i,j,num);
}