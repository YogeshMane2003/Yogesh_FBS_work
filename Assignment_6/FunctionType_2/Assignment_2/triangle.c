#include<stdio.h>

int triangle();

int triangle(){

    int a,b,c;
    printf("Enter first side: \n");
    scanf("%d",&a);
    printf("Enter second side: \n");
    scanf("%d",&b);
    printf("Enter third side: \n");
    scanf("%d",&c);

    if(a == b && b == c){

        return 1;

    }else if(a == b || b == c || a == c){

        return 2;
        
    }else{

        return 3;
    }
}
void main(){
    int res=triangle();
    if(res == 1)
    printf("Triangle is Equilateral");
    else if(res==2)
    printf("Triangle is Isosceles");
    else
    printf("Triangle is Scalene");
}