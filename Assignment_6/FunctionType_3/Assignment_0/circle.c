#include<stdio.h>
 void area(float,float);

 void main(){
    float radius = 5.0;
    float pi = 3.14;
    area(radius,pi);
}

 void area(float a,float b){
 
    float area;

    area = b*a*a;

    printf("Area of circle id %0.2f",area);

 }
