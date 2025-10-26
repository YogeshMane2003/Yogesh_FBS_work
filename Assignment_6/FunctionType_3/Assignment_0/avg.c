#include<stdio.h>

void avg(int,int,int,int,int);

void main(){
    int a = 1, b = 2, c = 3, d = 4, e = 5;
    avg(a,b,c,d,e);
}
 
void avg(int x,int y,int z,int w,int v){

    int avg;

    avg = (x+y+z+w+v)/5;

    printf("Average of the numbers %d",avg);
}

