#include<stdio.h>

void leap(int);

void leap(int year){
    

    if(year%4 == 0){
        printf("Year is leap");
    }else{
        printf("Year is not leap");
    }
}


void main(){
    int year = 2025;
    leap(year);
}