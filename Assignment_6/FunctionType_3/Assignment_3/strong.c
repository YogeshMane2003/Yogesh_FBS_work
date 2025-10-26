#include<stdio.h>

void strong(int,int,int,int,int,int);

void strong(int n,int sum,int fact,int rem,int i,int original){
    

    while(n>0){
        rem = n%10;
        fact = 1;
        i = 1;

        while(i <= rem){
            fact = fact * i;
            i++;
        }
        sum = sum + fact;
        n = n/10;
    }

    if(sum == original){
        printf("Strong ");
    }else{
        printf("No Strong");
    }
}
void main(){
    int n = 145;
    int sum = 0, fact, rem, i;
    int original = n;
    strong(n,sum,fact,rem,i,original);
}