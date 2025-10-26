#include<stdio.h>

int greatest();

int greatest(){
    int a,b,c;
    printf("Enter first number: \n");
    scanf("%d",&a);
    printf("Enter second number: \n");
    scanf("%d",&b);
    printf("Enter third number: \n");
    scanf("%d",&c);

    if(a >= b && a >= c) {

        return 1;

    }
    else if(b >= a &&  b >= c){

        return 2;

    }
    else{

        return 3;

        }
    }
void main(){
    int res = greatest();
    if(res==1)
    printf("First number is gratest");
    else if(res==2)
    printf("Second number is greatest");
    else
    printf("Third number is greatest");
    
}
