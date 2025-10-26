#include<stdio.h>

void oneToten(int);

void oneToten(int i){
    

    while (i<=10){
        printf("%d\n",i);
        i++;
    }
}

void main(){
    int i = 1;
    oneToten(i);
}