#include<stdio.h>

int strong();

int strong(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int sum = 0, fact, rem, i;
    int original = n;

    while(n>0){
        rem = n%10;
        fact = 1;
        i = 1;

        while(i <= rem){
            fact = fact * i;
            i++;
        }
        sum = sum + fact;
        n = n/10;
    }

    if(sum == original){
        return 1;
    }else{
        return 0;
    }
}
void main(){
    if(strong())
    printf("Number is Strong number");
    else
    printf("Number is not Strong number");
}