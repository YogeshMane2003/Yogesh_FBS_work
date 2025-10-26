#include<stdio.h>

void table(int,int,int);

void table(int i,int num,int n){
    

    while (i<=10){
        num = n * i;
        printf("%d\n", num);
        i++;
    }
}

void main(){
    int i = 1;
    int num;
    int n = 5;
   table(i,num,n);
}