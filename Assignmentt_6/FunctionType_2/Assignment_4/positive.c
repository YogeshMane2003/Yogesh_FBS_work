#include<stdio.h>

int posNeg();

int posNeg(){
     int num;

    printf("Enter the number:");
    scanf("%d", &num);

    if(num > 0){

        return 1;

    }else if(num < 0){

        return 2;

    }else{

        return 3;
        
    }
}

void main(){
    int res = posNeg();
    if(res==1)
    printf("Number is Positive");
    else if(res==2)
    printf("Number is Negative");
    else
    printf("Number is neutral");
}