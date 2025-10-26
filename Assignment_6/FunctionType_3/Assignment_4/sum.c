#include<stdio.h>

void sum(int,int,int);

void sum(int num,int rem,int s){
    

    while(num!=0){
        rem = num % 10;
        s = s + rem;
        num = num / 10;
    }

    printf("Sum : %d", s);

}

void main(){
    int num;
    int rem;
    int s=0;

    printf("Enter the number:");
    scanf("%d", &num);
    sum(num,rem,s);
}