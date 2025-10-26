#include<stdio.h>

int factorial();

int factorial(){
    int num;
    int i = 1;
    int fact = 1;
    printf("Enter number: ");
    scanf("%d",&num);

    while(i <= num){
        fact = fact * i;
        i++;
    }
    return fact;

}

void main(){
   int res = factorial();
   printf("The factorial of the given number is : %d",res);
}