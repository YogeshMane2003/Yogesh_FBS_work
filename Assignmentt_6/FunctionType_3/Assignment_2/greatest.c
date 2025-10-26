#include<stdio.h>

void greatest(int,int,int);

void greatest(int a,int b,int c){

    if(a >= b && a >= c) {

        printf("%d is gratest", a);

    }
    else if(b >= a &&  b >= c){

        printf("%d is greatest", b);

    }
    else{

        printf("%d is greatest", c);

        }
    }
void main(){
    int a = 3, b = 5, c = 9;
    greatest(a,b,c);
    
}
