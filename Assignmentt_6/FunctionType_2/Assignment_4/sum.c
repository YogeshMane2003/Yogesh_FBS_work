#include<stdio.h>

int sum();

int sum(){ 
    int num;
    int rem;
    int sum =0;

    printf("Enter the number:");
    scanf("%d", &num);

    while(num!=0){
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }

    return sum;

}

void main(){
   int res = sum();
   printf("The sum is %d",res);
}