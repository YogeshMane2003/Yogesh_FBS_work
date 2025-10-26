#include<stdio.h>

int evenOdd();


int evenOdd(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    if(num%2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

void main(){
    if(evenOdd())
    {
        printf("The number is Even");
    }
    else{
        printf("The number is Odd");
    }

}

