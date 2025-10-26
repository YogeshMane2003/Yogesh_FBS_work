#include<stdio.h>

void sum(int,int,int);

void sum(int start,int end,int sum){
    

    while (start <= end){
        sum = sum + start;
        start++;
    }
    printf("%d\n", sum);
}

void main(){
    int start = 1, end = 5;
    int s = 0;
    sum(start,end,s);
}