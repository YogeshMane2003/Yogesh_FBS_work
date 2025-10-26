#include<stdio.h>

void swap(int,int,int);

void swap(int x,int y,int z){
    

    z = x;
    x = y;
    y = z;

    printf("a is %d\n",x);
    printf("b is %d",y);
}
void main(){
    int a = 3;
    int b = 4;
    int temp;
swap(a,b,temp);    
}