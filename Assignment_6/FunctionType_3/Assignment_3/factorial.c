#include<stdio.h>

void factorial(int,int,int);

void factorial(int num,int i,int fact){
    

    while(i <= num){
        fact = fact * i;
        i++;
    }
    printf("%d",fact);
}

void main(){
    int num = 5;
    int i = 1;
    int fact = 1;
   factorial(num,i,fact);
}