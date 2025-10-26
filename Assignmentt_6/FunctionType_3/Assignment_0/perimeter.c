#include<stdio.h>
 
void peri(int,int,int);

void peri(int a,int b,int c){
    

    c = 2 * (a + b);

    printf("Perimeter of rectangle is %d", c);
}

void main(){
    int length = 2;
    int width = 4;
    int perimeter;
    peri(length,width,perimeter);

}