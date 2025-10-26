#include<stdio.h>

void evenOdd(int);

void evenOdd(int num){
    

    

    if(num%2 == 0){

        printf("Number %d even",num);

    }else{
        
        printf("Number %d is odd",num);
    }
}

void main(){
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    evenOdd(num);
}