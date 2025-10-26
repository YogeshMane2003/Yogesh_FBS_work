#include<stdio.h>

void posNeg(int);

void posNeg(int num){
     

    if(num > 0){

        printf("Number %d is Positive", num);

    }else if(num < 0){

        printf("Number is %d Negative", num);

    }else{

        printf("Number %d is zero", num);
        
    }
}

void main(){
    int num;

    printf("Enter the number:");
    scanf("%d", &num);
    posNeg(num);
}