#include<stdio.h>

int sum();

int sum(){
    int start,end;
    printf("Enter starting number: ");
    scanf("%d",&start);
    printf("Enter ending number: ");
    scanf("%d",&end);
    int sum = 0;

    while (start <= end){
        sum = sum + start;
        start++;
    }
    return sum;
}

void main(){
    int res=sum();
    printf("The sum is : %d",res);
}