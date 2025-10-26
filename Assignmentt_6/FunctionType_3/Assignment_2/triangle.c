#include<stdio.h>

void triangle(int,int,int);

void triangle(int a, int b, int c){

    

    if(a == b && b == c){

        printf("Triangle is Equilateral");

    }else if(a == b || b == c || a == c){

        printf("Triangle is Isosceles");
        
    }else{

        printf("Triangle is Scalene");
    }
}
void main(){
    int a = 2, b = 2, c = 1;
    triangle(a,b,c);
}