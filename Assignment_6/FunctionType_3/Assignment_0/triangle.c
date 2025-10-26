#include<stdio.h>

void triangle(int,int,int);
 
void triangle(int base,int height,int area){
    

    area = 0.5 * base * height;

    printf("Area of triangle is %d", area);
}
void main(){
    int base = 2;
    int height = 6;
    int area;
    triangle(base,height,area);
}